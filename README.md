# Distance Measuring System
This repository contains the code for a Distance Measuring System project using the AVR ATmega32 microcontroller, an ultrasonic sensor, a keypad, and an LCD. The code is written in Embedded C and uses the following drivers:

- MCAL: This directory contains drivers for the AVR ATmega32's Microcontroller Abstraction Layer. The drivers included in this directory are:

    * GPIO
    * ICU
- HAL: This directory contains drivers for the AVR ATmega32's Hardware Abstraction Layer. The drivers included in this directory are:

    * Keypad
    * ICU
    * Ultrasonic

The Ultrasonic sensor is used to measure the distance of an object from the sensor, and the measured distance is displayed on the LCD.
In addition to measuring distance, the system is designed to give a warning signal when the distance falls below a certain threshold. This threshold can be set using the Keypad. When the distance falls below the threshold, the system will sound a warning signal to alert the user.

Feel free to use this code in your AVR ATmega32 projects.
