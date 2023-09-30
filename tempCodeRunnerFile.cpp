int n;
    cout<<"Enter the number: ";
    cin>>n;

    int b = 1;
    int sum = 0;
    while(b <= n){
        sum = sum + b;
        b = b + 1;
    }
    cout<<"sum from" << 1 << "to" << n << "=" << sum;