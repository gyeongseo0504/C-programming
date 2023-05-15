#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int Input_Current_Angle;
	int Input_Target_Angle;
	int Error;
	int Corrected_Error;

	printf("Input Current Angle = ");
	scanf("%d", &Input_Current_Angle);

	printf("Input Target Angle = ");
	scanf("%d", &Input_Target_Angle);

	Error = Input_Target_Angle - Input_Current_Angle;
	Corrected_Error = -360 + Error;

	printf("o.Error  : %d = %d - %d \n",Error,Input_Target_Angle,Input_Current_Angle);

	printf("c.Error  : %d = %d - %d \n",Corrected_Error,Input_Target_Angle,Input_Current_Angle);
}