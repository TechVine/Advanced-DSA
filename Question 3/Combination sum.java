import java.io.*;
import java.util.*;
class Main{
	static ArrayList<ArrayList<Integer> >
	combinationSum(ArrayList<Integer> arr, int sum)
	{
		ArrayList<ArrayList<Integer> > ans= new ArrayList<>();
		ArrayList<Integer> temp = new ArrayList<>();
		Set<Integer> set = new HashSet<>(arr);
		arr.clear();
		arr.addAll(set);
		Collections.sort(arr);
		findallNumbers(ans, arr, sum, 0, temp);
		return ans;
	}
	static void
	findallNumbers(ArrayList<ArrayList<Integer> > ans,
				ArrayList<Integer> arr, int sum, int index,
				ArrayList<Integer> temp)
	{
		if (sum == 0) {
			ans.add(new ArrayList<>(temp));
			return;
		}
		for (int i = index; i < arr.size(); i++) {
			// sum negative check
			if ((sum - arr.get(i)) >= 0) {
                // sum
				temp.add(arr.get(i));
				findallNumbers(ans, arr, sum - arr.get(i), i, temp);
				// backtracking
				temp.remove(arr.get(i));
			}
		}
	}

	// main function
	public static void main(String[] args)
	{
		ArrayList<Integer> arr = new ArrayList<>();
    // adding values 
		arr.add(1);
		arr.add(2);
		arr.add(3);
		int sum = 4;
		ArrayList<ArrayList<Integer> > ans= combinationSum(arr, sum);
		if (ans.size() == 0) {
			System.out.println("Empty");
			return;
		}
		for (int i = 0; i < ans.size(); i++) {
			System.out.print("(");
			for (int j = 0; j < ans.get(i).size(); j++) {
				System.out.print(ans.get(i).get(j) + " ");
			}
			System.out.print(") ");
		}
	}
}

// code by Rufus paul
