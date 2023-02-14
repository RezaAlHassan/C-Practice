#include <iostream>
using namespace std;

int parent(int i) {
    return (i - 1) / 2;
}

void max_heapify(int a[], int n, int i)
{
    int largest = i; // Initialize largest as root
    int left = 2 * i + 1; // left child
    int right = 2 * i + 2; // right child
    // If left child is larger than root
    if (left < n && a[left] > a[largest])
        largest = left;
    // If right child is larger than root
    if (right < n && a[right] > a[largest])
        largest = right;
    // If root is not largest
    if (largest != i) {
        // swap a[i] with a[largest]
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;

        max_heapify(a, n, largest);
    }
}


void build_maxheap(int a[],int n)

    {   int i;
        for(i = n/2; i >= 1; i--)
        {
            max_heapify(a,n,i);
        }
    }

int extract_max(int a[], int *n) {
    int max_item = a[0];

    // replace the first item with the last item
    a[0] = a[*n - 1];
    *n = *n - 1;

    // maintain the heap property by heapifying the
    // first item
    max_heapify(a, *n, 0);
    return max_item;
}

/*Function to implement the heap sort*/
void heapSort(int a[], int n)
{

    for (int i = n / 2 - 1; i >= 0; i--)
        max_heapify(a, n, i);
    // One by one extract an element from heap
    for (int i = n - 1; i >= 0; i--) {
        /* Move current root element to end*/
        // swap a[0] with a[i]
        int temp = a[0];
        a[0] = a[i];
        a[i] = temp;

        max_heapify(a, i, 0);
    }
}
/* function to print the array elements */
void printArr(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout<<a[i]<<" ";
    }

}

void insert(int a[], int data, int *n) {
    if (*n >= 8) {
        cout<<"heap is full";
        return;
    }
    // first insert the time at the last position of the array
    // and move it up
    a[*n] = data;
    *n = *n + 1;


    // move up until the heap property satisfies
    int i = *n - 1;
    while (i != 0 && a[parent(i)] < a[i]) {
        int temp = a[parent(i)];
        a[parent(i)]=a[i];
        a[i]=temp;
        i = parent(i);
    }
}

int main()
{   //max 9 elements
    int a[] = {47, 9, 22, 42, 27, 25, 0};
    int n = sizeof(a) / sizeof(a[0]);
    cout<<"Before sorting array elements are: \n";
    printArr(a, n);
    build_maxheap(a, n);
    cout<<"\nAfter applying max heap: \n";
    printArr(a, n);
    //priority queue
    cout<<"max:"<< a[0]<<endl;
    cout<<"extract max:"<< extract_max(a,&n);
    heapSort(a, n);
    cout<<"\nAfter applying heap sort (without maximum elements(extracted)): \n";
    printArr(a, n);
    insert(a, 55, &n);
    cout<<"\nAfter applying insert: \n";
    printArr(a, n);
    return 0;
}


