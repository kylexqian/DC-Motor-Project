# DC-Motor-Project
DC Motor Control Project with a PID motion controller

Overall, the goal of this project was to control the trajectory of a motor based on inputs given to it through a client (in this case matlab). I plotted angles with two different types of inputs (step inputs, and cubic inputs) to see the error that the motor would generate when trying to track these trajectories. In order to accomplish this, intermediate steps such as reading the encoder, reading the current, and holding a specified angles were completed first. These options are still remnant in the client code on matlab through a menu.

## Hardware
This project consisted of a PIC32 Microcontroller, an H-bridge, an Encoder, a Decoder, a current sensor, and a Brush DC Motor. 

## Control Systems
There were two separate feedback systems here, the first one is the motion control between the input of the decoded encoder angle into the microcontroller and the motor angle output, and the second is the current control between the input of the PWM generated by the mictrocontroller and the current into the motor output.

The motion control on the Micocontroller, as well as the Encoder, and Decoder all ran on a 200 Hz clock cycle, while the current control on the Microcontroller, as well the H-bridge and current sensor all ran on a 5 kHz clock cycle. 

