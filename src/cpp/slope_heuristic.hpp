#ifndef AUTOWIG
#pragma once

namespace statiskit
{
    template<class E>
        SlopeHeuristicSelection< E >::SlopeHeuristicSelection(const typename E::data_type* data) : SlopeHeuristic()
        { 
            _proposals.clear();
            if(data)
            { _data = data->copy().release(); }
            else
            { _data = nullptr; }
        }

    template<class E>
        SlopeHeuristicSelection< E >::SlopeHeuristicSelection(const SlopeHeuristicSelection< E >& she) : SlopeHeuristic(she)
        {
            _proposals = std::vector< typename E::estimated_type* >(she._proposals.size(), nullptr);
            for(Index index = 0, max_index = _proposals.size(); index < max_index; ++index)
            { _proposals[index] = static_cast< typename E::estimated_type* >(she._proposals[index]->copy().release()); }
            if(she._data)
            { _data = static_cast< typename E::data_type* >(she._data->copy().release()); }
            else
            { _data = nullptr; }
        }

    template<class E>
        SlopeHeuristicSelection< E >::~SlopeHeuristicSelection()
        { 
            for(Index index = 0, max_index = _proposals.size(); index < max_index; ++index)
            {
                delete _proposals[index];
                _proposals[index] = nullptr;
            }
            _proposals.clear();
            if(_data)
            {
                delete _data;
                _data = nullptr;
            }
        }
    
    template<class E>
        typename E::estimated_type const * SlopeHeuristicSelection< E >::get_estimated() const
        { 
            typename E::estimated_type const * estimated;
            if(this->_selected.size() > 0)
            { estimated = _proposals[this->_selected[(*this->_selector)(*this)]]; }
            return estimated;
        }

    template<class E>
        const typename E::estimated_type* SlopeHeuristicSelection< E >::get_proposal(const Index& index) const
        { return _proposals[index]; }

    template<class E>
        const typename E::data_type* SlopeHeuristicSelection< E >::get_data() const
        { return _data; }

    template<class E>
        void SlopeHeuristicSelection< E >::add(const double& penshape, const double& score, typename E::estimated_type* estimated)
        {
            if(boost::math::isfinite(penshape) && boost::math::isfinite(score))
            {
                std::vector< double >::iterator it = std::lower_bound(this->_penshapes.begin(), this->_penshapes.end(), penshape);
                if(it == this->_penshapes.end())
                {
                    this->_penshapes.push_back(penshape);
                    this->_scores.push_back(score);
                    _proposals.push_back(estimated);
                }
                else if(*it == penshape)
                {
                    Index index = distance(this->_penshapes.begin(), it);
                    if(this->_scores[index] < score)
                    {
                        delete _proposals[index];
                        this->_scores[index] = score;
                        _proposals[index] = estimated;
                    }
                }
                else
                {
                    Index index = distance(this->_penshapes.begin(), it);
                    this->_penshapes.insert(it, penshape);
                    this->_scores.insert(this->_scores.begin() + index, score);
                    _proposals.insert(_proposals.begin() + index, estimated);
                }
            }
        }
}

#endif