/**
 * @file para.h
 * @author Shashank
 * @brief contains all the headers required.
 * @version 0.1
 * @date 2021-07-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __PARA_H__
#define __PARA_H__
int result;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//# include <stdio_ext.h> //not supported by the vcode command line

//# include <conio.h> //not supported by the linux command line

//# include <dos.h> //not supported by the linux command line
void Welcome_screen(void);
void Title(void);
void login_screen(void);
int Parameter_s();
int power_input();
int power_output();
int resistance();
int freq();
int speed();
int torque();
int secondary_turns();

#endif  /* #define __PARA_H__ */
