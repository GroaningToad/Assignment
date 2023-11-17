#include <stdio.h>
#include <stdlib.h>

int main()
{   int numSub, i;
    float gpaSum = 0;

    printf("Enter number of Subjects: ", numSub);
    scanf("%d", &numSub);

    printf("Number of subject is %d \n", numSub);

    float gpa [numSub];

    for (i = 0; i < numSub; i++) {
        printf("Enter GPA for subject %d: ", i + 1);
        scanf("%f", &gpa[i]);
        gpaSum += gpa[i]; }



   float averageGPA = gpaSum / numSub;
   printf("Average GPA is %.2f", averageGPA);


    return 0;
}
