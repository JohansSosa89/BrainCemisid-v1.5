#include"sumQueue.h"

void SumQueue::enqueue(struct queue &q, int value){
     struct node *aux = new(struct node);
     aux->num = value;
     aux->next = NULL;

     if(q.foward == NULL){
         q.foward = aux;   // encola el primero elemento
     }
     else
         (q.back)->next = aux;
     q.back = aux;        // puntero que siempre apunta al ultimo elemento
}

int SumQueue::dequeue(struct queue &q){
     int num;
     struct node *aux;
     aux = q.foward;      // aux apunta al inicio de la cola
     num = aux->num;
     q.foward = (q.foward)->next;
     delete(aux);          // libera memoria a donde apuntaba aux
     return num;
}

void SumQueue::showQueue(struct queue q){
     struct node *aux;
     aux = q.foward;
     while(aux != NULL){
         std::cout<<"   "<<aux->num;
         aux = aux->next;
     }
}

int SumQueue::queueLenght(struct queue q){
    struct node *aux;
    int l = 0;
    aux = q.foward;
    while(aux != NULL){
        aux = aux->next;
        l++;
    }
    return l;
}

void SumQueue::clearQueue(struct queue &q){
     struct node *aux;
     while(q.foward != NULL){
         aux = q.foward;
         q.foward = aux->next;
         delete(aux);
     }
     q.foward = NULL;
     q.back = NULL;
}
