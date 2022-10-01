# Algorithm-Analysis
For basic concept understanding

This repository is consist of basic DSA concepts all the codes are written in cpp.

In this repo I had added many programs whose basic concept are nessary to learn like: -

1. (a) Linear Search:
		
	Linear Search is defined as a sequential search algorithm that starts at one end and goes through each element of a list until the desired element is found, otherwise the search continues till the end of the data set. It is the easiest searching algorithm.
	
	* By Normal Approch -
		Start from the leftmost element of arr[] and one by one compare x with each element of arr[]
		If x matches with an element, return the index.
		If x doesn’t match with any of the elements, return -1.
	
	* By Recursive Approch -
		If the size of the array is zero then, return -1, representing that the element is not found. This can also be treated as the base condition of a recursion call.
		Otherwise, check if the element at the current index in the array is equal to the key or not i.e, arr[size – 1] == key
		If equal, then return the index of the found key.
	
		Time Complexity
			Best Case Complexity: O (1)
			Worst Case Complexity: O (n)

   (b) Binary Serach:
   		
	Binary Search is a searching algorithm used in a sorted array by repeatedly dividing the search interval in half.
	
	The basic steps to perform Binary Search are:

	Begin with the mid element of the whole array as a search key.
	If the value of the search key is equal to the item then return an index of the search key.
	Or if the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half.
	Otherwise, narrow it to the upper half.
	Repeatedly check from the second point until the value is found or the interval is empty.
	
		Time Complexity
			Best Case Complexity: O (1)
			Worst Case Complexity: O (log n)

2. Merge Sort:
	
	The Merge Sort algorithm is a sorting algorithm that is based on the Divide and Conquer paradigm. In this algorithm, the array is initially divided into two equal halves and then they are combined in a sorted manner.
	
	
	MergeSort(arr[], l,  r)
	If r > l

	Find the middle point to divide the array into two halves: 
	middle m = l + (r – l)/2
	Call mergeSort for first half:   
	Call mergeSort(arr, l, m)
	Call mergeSort for second half:
	Call mergeSort(arr, m + 1, r)
	Merge the two halves sorted in steps 2 and 3:
	Call merge(arr, l, m, r)

		Time Complexity
			Best Case Complexity: O (n log n)
			Worst Case Complexity: O (n log n)

3. Quick Sort:
		
	QuickSort is a Divide and Conquer algorithm. It picks an element as a pivot and partitions the given array around the picked pivot. There are many different versions of quickSort that pick pivot in different ways. 

	Always pick the first element as a pivot.
	Always pick the last element as a pivot (implemented below)
	Pick a random element as a pivot.
	Pick median as the pivot.
	
	
	*Pseudo Code for recursive QuickSort function:

	/*low  –> Starting index,  high  –> Ending index*/

	quickSort(arr[], low, high) {
	if (low < high) {
	/*pi is partitioning index, arr[pi] is now at right place */
	 pi = partition(arr, low, high);
	quickSort(arr, low, pi – 1);  //Before pi
	quickSort(arr, pi + 1, high); // After pi
	  }
	}
	
	*Pseudo code for partition()  

	/*This function takes last element as pivot, places the pivot element at its correct position in sorted array, and places all smaller (smaller than pivot) to left of pivot and all greater elements to right of pivot */

	partition (arr[], low, high)
	{
	    //*pivot (Element to be placed at right position)
	    pivot = arr[high];  
	    i = (low – 1)  //*Index of smaller element and indicates the 
	    //*right position of pivot found so far
	    for (j = low; j <= high- 1; j++){
		//*If current element is smaller than the pivot
		if (arr[j] < pivot){
		    i++;    //*increment index of smaller element
		    swap arr[i] and arr[j]
		}
	    }
	    swap arr[i + 1] and arr[high])
	    return (i + 1)
	}

		Time Complexity
			Best Case Complexity: O (n log n)
			Worst Case Complexity: O (n^2)


4. Fractional/Greedy Knapsak:

	The basic idea of the greedy approach is to calculate the ratio value/weight for each item and sort the item on the basis of this ratio. Then take the item with the highest ratio and add them until we can’t add the next item as a whole and at the end add the next item as much as we can. Which will always be the optimal solution to this problem.
	
	*Calculate the ratio(value/weight) for each item.
	Sort all the items in decreasing order of the ratio.
	Initialize res =0, curr_cap = given_cap.
	Do the following for every item “i” in the sorted order:
		If the weight of the current item is less than or equal to the remaining capacity then add the value of that item into the result
		else add the current item as much as we can and break out of the loop
	Return res
	
		 Time Complexity -> O (N logN)

5. 0/1 / Dynamic Knapsak:

	The 0/1 knapsack problem means that the items are either completely or no items are filled in a knapsack.
	
	Profit Table -> Actual values are putted in this table by adding and acheiving maximum values.
	Keep table -> Table represents 0/1, if values changes 1 represents at that place, if not changed then 0.
	
		Time Complexity
			O (N*W)
			   where'N' is the number of weight elements 
				'W' is the capacity of the knapsack

6. (a) Prism Algorithm:

		 Time Complexity -> O (E log V)
		 			where 'E' is Edge
					      'V' is Vertex

   (b) Kruskal Algorithm:
   		
		Time Complexity -> O (E log V)
					where 'E' is Edge
                                             'V' is Vertex
 
7. Dijkstra's Algorithm:

		Time Complexity -> O (E log V)
					where 'E' is Edge
                                             'V' is Vertex


