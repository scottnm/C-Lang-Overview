/*** INTRODUCTION
 *
 * C does not have classes, but it has a simpler construct known
 *      as structs (short for structures). Here's a simple example
 *      of using a struct
 */

#include "3-structs.h"
#include <stdio.h>

void main(int argc, char** argv)
{
    struct vector2f my_vec2;
    my_vec2.x = 1.5;
    my_vec2.y = 3.0;

    struct vector2f another_vec2 = vec2_add(my_vec2, my_vec2);

    vector3f my_vec3;
    my_vec3.x = 1;
    my_vec3.y = 2;
    my_vec3.z = 3;
    
    vector3f another_vec3 = vec3_add(my_vec3, my_vec3);
    vec3_print(another_vec3); 
}


struct vector2f vec2_add(struct vector2f v1, struct vector2f v2)
{
    v1.x += v2.x;
    v1.y += v2.y;
    return v1;
}

vector3f vec3_add(vector3f v1, vector3f v2)
{
    v1.x += v2.x;
    v1.y += v2.y;
    v1.z += v2.z;
    return v1;
}

void vec3_print(vector3f v)
{
    printf("<%.2f, %.2f, %.2f>\n", v.x, v.y, v.z);
}

/*** SUMMARY
 *
 * Structs are similar to classes in that they can be thought of
 *      as user defined types that can aggregate smaller pieces
 *      of data (in this example it was 3 floats to form a vector)
 *
 * Structs must be declared with a name and set of fields before
 *      they can be used and are often declared in header files
 *
 * Structs can be passed as parameters just like primitive types
 *      can and are copied just like primitive types
 *
 * Use a period/dot to access the fields within a struct (ex: v.z)
 */
