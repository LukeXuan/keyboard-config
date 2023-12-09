#ifndef MACROS_H_
#define MACROS_H_

#define IRIS_MACRO(name, K0, K1, K2, K3) \
    / { \
        macros { \
            name: name { \
                compatible = "zmk,behavior-macro"; \
                label = ZMK_HELPER_STRINGIFY(UC_MACRO_ ## name); \
                wait-ms = <0>; \
                tap-ms = <0>; \
                #binding-cells = <0>; \
                bindings = <&macro_press &kp LCTRL &kp LSHFT> , \
                           <&macro_tap &kp U &kp K0 &kp K1 &kp K2 &kp K3 &kp SPACE>, \
                           <&macro_release &kp LSHFT &kp LCTRL>; \
            }; \
        }; \
    };

#endif // MACROS_H_
