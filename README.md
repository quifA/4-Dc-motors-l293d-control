# 4-Dc-motors-l293d-control
Control 4 DC motors using 2 L293D motor driver ICs with Arduino UNO. Supports forward, backward, alternating motion, and adjustable speed via PWM


## Components Used
- Arduino UNO
- 4 x DC motors
- 2 x L293D motor driver ICs
- Breadboard
- Jumper wires
- Power source (from Arduino)


## Wiring Overview
- Each L293D controls 2 motors.
- Motor power pins (VCC2) are connected to 5V.
- Control pins (IN1~IN8) connected to Arduino pins 3~9.
- Enable pins (EN1~EN4) connected to PWM-capable pins: 10, 2, 12, 13.


## How It Works
1. Forward Movement: All motors rotate in one direction for 30 seconds.
2. Backward Movement: All motors rotate in the opposite direction for 60 seconds.
3. Alternating Motion: Motors alternate between left and right rotation every 5 seconds for a minute.
4. Stop: All motors stop permanently using while(true);


## Functions
- driveAll(...): Controls direction and speed for each motor.
- stopAll(): Stops all motors by setting PWM to 0.


##PIC
![Pic](https://github.com/user-attachments/assets/6c9823c4-8334-49b8-8013-99b739932d40)
