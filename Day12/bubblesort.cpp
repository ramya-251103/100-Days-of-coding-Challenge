 void bubbleSort(int arr[], int n) {
        // Your code here
        
        for(int i = n-1; i>=1; i--)
        {
            int didSwap = 0;
            for(int j = 0; j<i; j++)
            {
                if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                didSwap = 1;
                }
                
            }
            if(didSwap == 0)
        break;
        }
        
        
    }
