//intake roller

//sets intake motor value

void conveyor()
{
	if(vexRT[Btn8R] == 1)
	{
		motor[intakeMotor] = 127;
	}
	else if(vexRT[Btn8L] == 1)
	{
		motor[intakeMotor] = -127;
	}
	else if(vexRT[Btn8D] == 1)
	{
		motor[intakeMotor] = 0;
	}
}
