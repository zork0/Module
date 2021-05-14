void BST ::Inorder(BST* root)
{
    if (!root) {
        return;
    }
    Inorder(root->left);
    cout << root->data << endl;
    Inorder(root->right);
}
 

template <typename T> class vectorClass{
    // arr is the integer pointer
    // which stores the address of our vector
    T* arr;
    int capacity;
 
    // current is the number of elements
    int current;
 
public:
    // Default constructor to initialise
    // an initial capacity of 1 element and
    // allocating storage using dynamic allocation
    vectorClass() {
        arr = new T[1];
        capacity = 1;
        current = 0;
    }
 
    void push(T data) {
 
        // if the number of elements is equal to the
        // capacity, that means we don't have space to
        // accommodate more elements. We need to double the
        // capacity
        if (current == capacity) {
            T* temp = new T[2 * capacity];
 
            // copying old array elements to new array
            for (int i = 0; i < capacity; i++) {
                temp[i] = arr[i];
            }
 
            // deleting previous array
            delete[] arr;
            capacity *= 2;
            arr = temp;
        }
 
        arr[current] = data;
        current++;
    }
 
    void push(int data, int index) {
 
        // if index is equal to capacity then this
        // function is same as push defined above
        if (index == capacity)
            push(data);
        else
            arr[index] = data;
    }
 
    // function to extract element at any index
    T get(int index) {
        if (index < current)
            return arr[index];
    }
 
    void pop() { current--; }
    int size() { return current; }
    int getcapacity() { return capacity; }
    void print() {
        for (int i = 0; i < current; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
