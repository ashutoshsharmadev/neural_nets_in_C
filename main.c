#include <stdio.h>
#include <stdlib.h>



float train[][4] = {
    {0,0},
    {1,2},
    {2,4},
    {3,6},
};

#define TRAINING_SAMPLE_COUNT (sizeof(train)/sizeof(train[0]))

float rand_float(){
    return (float)rand()/(float)RAND_MAX;
}

float cost(float w, float b){
        float result = 0.0f;
        for (size_t i=0;i<TRAINING_SAMPLE_COUNT;i++){
        float x = train[i][0];
        float y = x*w + b ;
        // printf("%f,%f\n",y,train[i][1]);
        float error = y - train[i][1];
        result += error*error;
    }
    result /= TRAINING_SAMPLE_COUNT;
    return result;
}

int main(void){
    // y = x * w;
    // or y = x * w + b;
    srand(56);
    // w is weight, b is bias
    // cost function used is mean squared error
    float w = rand_float()*10.0f;
    float b = rand_float() * 2.0f;
    float learning_rate = 1e-2;

    float eps = 1e-3;
    for (size_t i = 0; i < 10000; ++i){
        float dw = (cost(w+eps, b)-cost(w, b))/eps;
        float db = (cost(w, b + eps)-cost(w, b))/eps;
        w -= learning_rate*dw;
        b -= learning_rate*db;

        printf("Cost = %f, w = %f, b = %f\n",cost(w, b), w, b);
    }
printf("%f\n",w);
    // printf("%f\n",cost(w));
  
    // printf("hello \n");
    return 0;
}