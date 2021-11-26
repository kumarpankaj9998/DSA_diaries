void merge(int arr1[], int arr2[], int n, int m) {
	    float gap;
	    int ptr1 , ptr2;//inital and final
	    int d=n+m;//stores dividend
	    gap=float(n+m)/float(2);
	    gap=ceil(gap);//smallest integer function ;
	    d=gap;//initial assignment to d with gap
	    
	    
	    while(gap>=1)
	    {
	        if(ptr2>n && ptr2<n+m)//moved to next array and not exited the space
	        {
	            if(ptr1>n)
	            {
	                if(arr2[ptr1]>arr2[ptr2])
	               { swap(arr2[ptr1],arr2[ptr2]);
	                ptr1++;
	                ptr2++;}
	            }
	           else
	           if(arr1[ptr1]>arr2[ptr2])
	            {
	            swap(arr1[ptr1],arr2[ptr2]);
	                ptr1++;
	                ptr2++;
	            }
	        }
	        if(ptr2<n)//within 1st array as yet
	               { 
	                   if(arr1[ptr1]<arr2[ptr2])
	                   {
	                       swap(arr1[ptr1],arr2[ptr2]);
	                       ptr1++;
	                       ptr2++;
	                       
	                   }
	                   
	               }
	               
	           if(ptr2 >= n+m)
	               {
	                   gap=float(d)/float(2);
	                   gap=ceil(gap);
	                   ptr2=gap;
	                   ptr1=0;
	               }
	    
	   
	   
	       }
	}
