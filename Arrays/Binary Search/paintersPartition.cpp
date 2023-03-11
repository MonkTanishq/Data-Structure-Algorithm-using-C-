bool isPossible(vector<int> &boards, int n, int k, int mid)
{
    int painterCount = 1;
    int boardPainted = 0;

    for (int i = 0; i < n; i++)
    {
        if (boardPainted + boards[i] <= mid)
        {
            boardPainted += boards[i];
        }
        else
        {
            painterCount++;
            if (painterCount > k || boards[i] > mid)
            {
                return false;
            }
            boardPainted = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int start = 0;
    int sum = 0;
    int n = boards.size();

    for (int i = 0; i < n; i++)
    {
        sum += boards[i];
    }

    int end = sum;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (isPossible(boards, n, k, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}