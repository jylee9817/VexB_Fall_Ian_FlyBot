//autonomus

void autoDefault()
{
	clearTimer(T1);

	while(time1[T1] < 3000)
	{
		motor[leftDriveMotor] = 127;
		motor[rightDriveMotor] = 127;
	}

	wait(1);
	clearTimer(T1);

		while(time1[T1] < 3000)
	{
		motor[wheelIntakeMotor] = 127;
		motor[railIntakeMotor] = -127;
	}

	wait(1);
	clearTimer(T1);

		while(time1[T1] < 3000)
	{
			motor[leftTopLauncher] = 127;
		motor[leftBottomLauncher] = 127;
		motor[rightTopLauncher] = 127;
		motor[rightBottomLauncher] = 127;
	}
}
