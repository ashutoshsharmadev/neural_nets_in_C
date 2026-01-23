#include <stdio.h>
#include <stdlib.h>



float train[][4] = {
    {0,0},
    {1,2},
    {2,4},
    {3,6},
};

#define train_count (sizeof(train)/sizeof(train[0]))

float rand_float(){
    return (float)rand()/(float)RAND_MAX;
}

float cost(float w){
        float result = 0.0f;
        for (size_t i=0;i<train_count;i++){
        float x = train[i][0];
        float y = x*w;
        printf("%f,%f\n",y,train[i][1]);
        float d = y - train[i][1];
        result += d*d;
    }
    result /= train_count;
    return result;
}

int main(void){
    // y = x * w;
    // or y = x * w * b;
    srand(56);
    float w = rand_float()*10.0f;

    float eps = 1e-3;
    printf("%f\n",cost(w));
    printf("%f\n",cost(w - eps));
  
    // printf("hello \n");
    return 0;
}