/*Write a multithreaded program that calculates various statistical values for a list of numbers. This program will be passed a series of numbers on the command line and will then create three separate worker threads.
One thread will determine the average of the numbers, the second will determine the maximum value, and the third will determine the minimum value.
For example, suppose your program is passed the integers 90 81 78 95 79 72 85 The program will report the average value to be 82, the minimum value to be 72 and the maximum value to be 95.
The variables representing the average, minimum, and maximum values will be stored globally. The worker threads will set these values, and the parent thread will output the values once the workers have exited. 
(We could obviously expand this program by creating additional threads that determine other statistical values, such as median and standard deviation.)*/
#include<stdio.h>
#include<pthread.h>

/*  Global Variables    */
int arr[50], i, n;
float average;
int min, max;
void *th()
{
	float sum=0;
	printf("Enter the size of list\n");
	scanf("%d",&n);
	printf("Enter the numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
		{
			sum=sum+arr[i];
		}
	average=sum/n;
	printf("The average value is:%f",average);
	return 0;
}
void *th1()
{
	min=arr[0];
	for(int i=1;i<n;i++)
		{
			if(min>arr[i])
			{
			min=arr[i];
			}
		}
	printf("\nThe Minimum  value is:=%d",min);
	return 0;
}
void *th2()
{
	int max=arr[0];
	for(int i=1;i<n;i++)
		{
			if(max<arr[i])
			{
			max=arr[i];
			}
		}
	printf("\nThe Maximum  value is:=%d",max);
	return 0;
	}
int main()
{
	int n,i;
	pthread_t t1;
	pthread_t t2;
	pthread_t t3;
	n=pthread_create(&t1,NULL,&th,NULL);
		pthread_join(t1,NULL);
	n=pthread_create(&t2,NULL,&th1,NULL);
		pthread_join(t2,NULL);
	n=pthread_create(&t3,NULL,&th2,NULL);
		pthread_join(t3,NULL);
}