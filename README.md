# 599B's VEX bot for 2016 Game

<img src="https://www.robotevents.com/vexawards/vexrwc.png" style="width:128px; height:200px">

By [Juyeong Lee](https://github.com/khungryapple)

## Basic functions:

<b>Drive:</b>
```erb
Uses Two Motor (might be adding two extra motor for extra power)
Turn and Forward only
```
<b>Launcher(Fly Wheel):</b> 
```erb
Uses Four Motor(Left and Right with bottom and top motor)
Works like pitching machine
```
<b>Intake:</b>
```erb
Uses two motor to intake the ball(Will be added before the Granada Comp)
It is going to be consisted of two parts, one that moves the wheel and one 
that moves the rail. The motors will be going in a opposite direction
```
<b>Autonomous:</b>
```erb
Going backward, intakes the ball, then Shoots the Ball
```
## Last Update on 11/18/2015:

- 10/28/2015: Added function that stores boolean to variable HalfWheelOn and FullWheelOn

- 10/29/2015.1: Inverted left bottom and right top Motor

- 10/29/2015.2: Changed return value of Half Wheel On and Full Wheel On

- 11/5/2015: Created old code file and new code file becuase the old code is not fully functional

- 11/09/2015.1: Changed the motor value because the motor was too slow to shoot the ball

- 11/09/2015.2: Added intake roller file and added update statement on the main file

- 11/16/2015.1: Added comment into the code to make the code more legible

- 11/16/2015.2: Deleted uneeded file - old FlyWheel file

- 11/18/2015: Adding two motor for the intake roller
