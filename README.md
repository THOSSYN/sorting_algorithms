#A Project on Sorting Algorithm and Big O Notations

[Tasks 0. Bubble sort]
	 a function that sorts an array of integers in ascending order using the Bubble sort algorithm

	Prototype: void bubble_sort(int *array, size_t size);
	You’re expected to print the array after each time you swap two elements (See example below)
	Write the the big O notations of the time complexity of the Bubble sort algorithm,
	with 1 notation per line:

	in the best case
	in the average case
	in the worst case

[Task 1. Insertion sort]
	a function that sorts a doubly linked list of integers in ascending order
	using the Insertion sort algorithm

	Prototype: void insertion_sort_list(listint_t **list);
	You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
	You’re expected to print the list after each time you swap two elements (See example below)
	Also write  the big O notations of the time complexity of the Insertion sort algorithm,
	with 1 notation per line in a file:

	in the best case
	in the average case
	in the worst case

[Task 2. Selection sort]
	a function that sorts an array of integers in ascending order using the Selection sort algorithm

	Prototype: void selection_sort(int *array, size_t size);
	You’re expected to print the array after each time you swap two elements (See example below)
	Write the big O notations of the time complexity of the Selection sort algorithm,
	with 1 notation per line in a file:

	in the best case
	in the average case
	in the worst case

[Task 3. Quick sort]
	a function that sorts an array of integers in ascending order using the Quick sort algorithm

	Prototype: void quick_sort(int *array, size_t size);
	You must implement the Lomuto partition scheme.
	The pivot should always be the last element of the partition being sorted.
	You’re expected to print the array after each time you swap two elements (See example below)
	Write the big O notations of the time complexity of the Quick sort algorithm,
	with 1 notation per line in a file:

	in the best case
	in the average case
	in the worst case

4. Shell sort - Knuth Sequence
	a function that sorts an array of integers in ascending order using the Shell sort algorithm,
	using the Knuth sequence

	Prototype: void shell_sort(int *array, size_t size);
	You must use the following sequence of intervals (a.k.a the Knuth sequence):
	n+1 = n * 3 + 1
	1, 4, 13, 40, 121, ...
	You’re expected to print the array each time you decrease the interval

[Task 5. Cocktail shaker sort]
	a function that sorts a doubly linked list of integers in ascending order using the
	Cocktail shaker sort algorithm

	Prototype: void cocktail_sort_list(listint_t **list);
	You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
	You’re expected to print the list after each time you swap two elements (See example below)
	Write the big O notations of the time complexity of the Cocktail shaker sort algorithm,
	with 1 notation per line:

	in the best case
	in the average case
	in the worst case

[Task 6. Counting sort]
	a function that sorts an array of integers in ascending order using the Counting sort algorithm

	Prototype: void counting_sort(int *array, size_t size);
	You can assume that array will contain only numbers >= 0
	You are allowed to use malloc and free for this task
	You’re expected to print your counting array once it is set up (See example below)
	This array is of size k + 1 where k is the largest number in array
	Write the big O notations of the time complexity of the Counting sort algorithm,
	with 1 notation per line:

	in the best case
	in the average case
	in the worst case

[Task 7. Merge sort]
	Write a function that sorts an array of integers in ascending order using the Merge sort algorithm

	Prototype: void merge_sort(int *array, size_t size);
	You must implement the top-down merge sort algorithm
	When you divide an array into two sub-arrays, the size of the left array
	should always be <= the size of the right array. i.e. {1, 2, 3, 4, 5} -> {1, 2}, {3, 4, 5}
	Sort the left array before the right array
	You are allowed to use printf
	You are allowed to use malloc and free only once (only one call)
	Write the big O notations of the time complexity of the Merge sort algorithm,
	with 1 notation per line in a file:

	in the best case
	in the average case
	in the worst case

[Task 8. Heap sort]
	a function that sorts an array of integers in ascending order using the Heap sort algorithm

	Prototype: void heap_sort(int *array, size_t size);
	You must implement the sift-down heap sort algorithm
	You’re expected to print the array after each time you swap two elements (See example below)
	Write the big O notations of the time complexity of the Heap sort algorithm, with 1 notation per line:

	in the best case
	in the average case
	in the worst case
