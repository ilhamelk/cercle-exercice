#include <stdio.h>
#include <stdlib.h>

int main()
{
    float rayon,surface;
    const float Pi=3.14 ;
    printf("Veuillez entrer la valeur du rayon de cercle:");
    scanf("%f,&rayon" );
    surface=rayon*rayon*Pi ;
    printf ("la surface du cercle est:%f,surface");

    return 0;
}
