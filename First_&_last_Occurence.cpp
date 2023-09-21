class Solution
{
public:
    int first(int arr[], int x, int n)
    {

        int ans = -1;
        int low = 0, high = n - 1;
        while (low <= high)
        {

            int mid = low + (high - low) / 2;

            if (arr[mid] == x)
            {
                ans = mid;
                high = mid - 1;
            }
            else if (arr[mid] > x)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }

    int second(int arr[], int x, int n)
    {

        int ans = -1;
        int low = 0, high = n - 1;
        while (low <= high)
        {

            int mid = low + (high - low) / 2;

            if (arr[mid] == x)
            {
                ans = mid;
                low = mid + 1;
            }
            else if (arr[mid] > x)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }

    vector<int> find(int arr[], int n, int x)
    {
        int a, b = -1;
        a = first(arr, x, n);
        if (a != -1)
        {
            b = second(arr, x, n);
        }
        return {a, b};
    }
};