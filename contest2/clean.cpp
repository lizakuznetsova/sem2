int* my_slightly_dumb_reallocation(int* source, unsigned int n_old, unsigned int n_new){
    if (n_new == 0){
        delete[] source;
        return NULL;
    }

    int* p = new int[n_new];

    if (source == NULL){
        return p;
    }

    if (n_new < n_old){
        for (unsigned int i = 0; i < n_new; i++)
            p[i] = source[i];
        delete[] source;
        return p;
    }
    else{
        for (unsigned int i = 0; i < n_old; i++) {
            p[i] = source[i];
        }
        delete[] source;
    }
    return p;
}

