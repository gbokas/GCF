#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
  int n1, n2, max, k, l;
  int nums1[1000], nums2[1000], nums3[1000];
  max = 5000000;
  cout << "nums1 number of points" << endl;
  cin >> n1;
  cout << "nums2 number of points" << endl;
  cin >> n2;
  for (int i = 0; i < n1; i++) cin >> nums1[i];
  for (int i = 0; i < n2; i++) cin >> nums2[i];
  if (n1 >= n2) 
    {
      cout <<"nums2 has to be larger than nums1" << endl;
    }
  if (n2 > 1000) 
    {
      cout <<"nums have to be smaller than 1000" << endl;
    }
    l = 0;
    for (int i = 0; i < n1; i++)
      {
        max = 5000000;
        for (int j = 0; j < n2; j++)
          {
	    if (nums2[j] > max)
	      {
	        nums3[l] = nums2[j];
                l++;
	        break;
	      }
            if (nums1[i] == nums2[j])
	      {
	        max = nums2[j];
	        k = j;
	      }
	  }
        if (max == nums2[k])
          {
            nums3[l] = -1;
	    l++;
          }
      }
    for (int i = 0; i < l - 1; i++)
      {
	cout << nums3[i] << endl;
      }
}	  
