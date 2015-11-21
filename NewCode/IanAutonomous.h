//autonomus

void autoDefault()
{
	motor[intakeMotor] = 127;

	motor[leftTopLauncher] = 127;
	motor[leftBottomLauncher] = 127; //higher the value, faster the motor, further the launch distance
	motor[rightTopLauncher] = 127;
	motor[rightBottomLauncher] = 127;
}
