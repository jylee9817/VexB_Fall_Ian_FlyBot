//intake roller

void intakeRoller(bool on)
{
	if(on == true)
	{
		motor[rightIntakeMotor] = 127;
		motor[leftIntakeMotor] = 127;
	}
	else
	{
		motor[rightIntakeMotor] = 127;
		motor[leftIntakeMotor] = 127;
	}
}
