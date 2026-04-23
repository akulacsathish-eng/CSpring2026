#include <stdio.h>
#include <string.h>

struct metal_properties{
    char metal_name[20];
    double resistivity_num;
    double resistivity_power;
    double length_in_m;
    double radius_in_mm;
};

int main(){
   
    
    struct metal_properties m1 = { "Copper", 1.688, -8, 80, 5};    
    struct metal_properties *m2 = &m1 ;
printf("metal name : %s \n resistivity_num = %lf \n  resistivity_power = %lf \n  length_in_m = %lf \n radius_in_mm = %lf \n", m1.metal_name,m1.resistivity_num, m1.resistivity_power,m1.length_in_m,m1.radius_in_mm);

printf("metal name : %s \n resistivity_num = %lf \n resistivity_power = %lf \n  length_in_m = %lf \n radius_in_mm = %lf \n", m2->metal_name,m2->resistivity_num, m2->resistivity_power,m2->length_in_m,m2->radius_in_mm);


}
    
