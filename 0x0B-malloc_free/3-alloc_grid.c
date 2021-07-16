#include "holberton.h"

void  init(int **ptrheight, int height, int width){
    int i = 0;
    while(height--) {
          while(i < width) {
               *(*ptrheight)++ = 0;
               i++;
          }
          i = 0;
          ptrheight++;           // incrementamos el puntero
    }
}
// while (height == 0) { 
//         height--;
// }
// height--;
void Free(int **ptrheight, int positionptr, int height) {
      while (positionptr < height) {
              free(*(--ptrheight));
              positionptr++;
      }
}
int *alloc_wight(int **ptrheight, int height, int width) {
        int copytemp = height;
        int **temp = ptrheight;
        while (height > 0)  
        {
              *(ptrheight) = (int *)malloc(sizeof(int) * width);
                          // (casteo)funcion

              if (!(*ptrheight)){
                    Free(ptrheight, height, copytemp);
                    return NULL;
              }
              ptrheight++;
              height--;
        }
        return ptrheight;
}
int **alloc_grid(int width, int height) {
      if (width && height){
            // Crear.
            int **State = NULL;
            int **ptrheight = (int **)malloc(sizeof(int *) * height);
            if (!ptrheight)  // ptrheight == NULL
            {
                  return ptrheight; 
            }
            // crea el wigt
            State = alloc_wight(ptrheight, height ,width);
            if (!State) // State == NULL
            {
                  free(ptrheight);
                  return NULL;
            }
            // inicialización estructuras de datos.
            init(ptrheight, height, width);
      }
      else {
          return NULL; 
      }
}
