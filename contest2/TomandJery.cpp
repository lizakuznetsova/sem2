unsigned int count_total_mice_amount(Cat* cats, unsigned int n) {

    unsigned int a = 0;
    for(unsigned int i = 0; i < n; i++){
        a += cats[i].mice_caught;
    }
    return a;
}
