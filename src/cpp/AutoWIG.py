def controller(asg):
    for node in ['class ::std::ctype',
                 'class ::std::ios_base']:
        try:
            asg[node].pybind11_export = False
        except Exception as e:
            print(e)
    from scons_tools.site_autowig.controller.statiskit_stl import controller as stl_controller
    return stl_controller(asg, library=False)