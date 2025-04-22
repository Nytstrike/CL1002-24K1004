// Define a structure to represent a point in 2D space with x and y coordinates. Implement
// functions to calculate the distance between two points and to check if a point lies within
// a specific rectangular boundary.
#include<stdio.h>
#include<math.h>
struct space{
    int x[2];
    int y[2];
    float distance;
};
int main(){
    struct space s1;
    printf("Enter C0-ordinates");
    printf("\nEnter X1:");
    scanf("%d",&s1.x[0]);
    printf("\nEnter Y1:");
    scanf("%d",&s1.y[0]);
    printf("\nEnter X2:");
    scanf("%d",&s1.x[1]);
    printf("\nEnter Y2:");
    scanf("%d",&s1.y[1]);
    s1.distance= pow((s1.x[1]-s1.x[1]),2)+pow((s1.y[1]-s1.y[0]),2);
    s1.distance=pow(s1.distance,.5);
    printf("%.2f",s1.distance);


}
