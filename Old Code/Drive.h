//#include "Macros.h"

int driveY = 0;
int driveX = 0;
int DEADZONE = 15;

void variables()
{
	driveY = vexRT[Ch3];
	driveX = vexRT[Ch1];
}

void setDriveMotors(int left, int right)
{
		motor[left_drive_motor] = left;
		motor[right_drive_motor] = right;
}

void drive()
{
	if(abs(driveY) > DEADZONE)
	{
		setDriveMotors(driveY, driveY);
	}
	else if(abs(driveX) > DEADZONE)
	{
		setDriveMotors(driveX, -driveX);
	}
	else
	{
		setDriveMotors(0,0);
	}
}

void updateDrive()
{
	drive();
}
