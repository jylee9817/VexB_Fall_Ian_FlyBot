#pragma config(Motor,  port2,           leftTopLauncher, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           leftBottomLauncher, tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port5,           rightTopLauncher, tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           rightBottomLauncher, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           rightDriveMotor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           leftDriveMotor, tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port9,           wheelIntakeMotor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          railIntakeMotor, tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
//Sets port for motors

//All default code should not be deleted at all!
#pragma platform(VEX)//default

//Competition Control and Duration Settings, default
#pragma competitionControl(Competition)
#pragma autonomousDuration(20)
#pragma userControlDuration(120)

//imports all file that are needed, default
#include "Vex_Competition_Includes.c"
#include "IanDrive.h"
//#include "IanFlyWheel.h" -Manual luncher code-
#include "IanFlyBot2.h"
//#include "IanAutonomous.h"

void pre_auton() //pre-autonomous code
{
  bStopTasksBetweenModes = true; //default code
}

task autonomous() //autonomous code
{
	AutonomousCodePlaceholderForTesting(); //filler autonomous code, will be replaced with real auto code
	//autoDefault();
}

task usercontrol()//user control code
{

	while (true) //The boolean has to be "true" in order to run the code
	{
		//set motor value
		setForwardValue(vexRT[Ch2]); //sets "forward" value to y axis joystick -> variable in drive file
		setTurnValue(vexRT[Ch1]); //sets "turn" value to x axis joystick -> variable in drive file

		//activates drive function
		drive();

		//fullFlyWheel(vexRT[Btn5U]); Code for the manual launcher - has to press it to continue launching -
		//halfFlyWheel(vexRT[Btn6U]);

		//set up for FlyWheel Function: sets boolean to true or false so that launcher will be activated
		//Has a problem in which only half speed launcher works with full speed

		setFullFlyWheel(vexRT[Btn5U]); //sets boolean for full speed launcher to true(when 5U is pressed)
		setFullFlyWheelOff(vexRT[Btn5D]); //sets boolean for stopping launcher to true(when 5D is pressed)
		setHalfFlyWheel(vexRT[Btn6U]); //sets boolean for half speed launcher to true(when 6U is pressed)
		setHalfFlyWheelOff(vexRT[Btn6D]); //sets boolean for stopping launcher to true(when 6D is pressed)

		//activates the FlyWheel Function
		fullFlyWheel(); //launcher moves with full speed based on the boolean above
		halfFlyWheel(); //launcher moves with half of the speed based on the boolean above

		//intake
		//intakeRoller(vexRT[Btn]);
	}
}

//Updated on 11/19/2015, added Autonomous code file
//Updated by: Juyeong Lee