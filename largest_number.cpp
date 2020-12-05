bool comp(int a,int b)
{
    string x,y;
    x=to_string(a);
    x+=to_string(b);
    y=to_string(b);
    y+=to_string(a);
    if(y>x)
    return true;
    else
    return false;
}
string Solution::largestNumber(const vector<int> &A) {
    vector<int> vs;
    for(int i=0;i<A.size();i++)
    {
        vs.push_back(A[i]);
    }
    sort(vs.begin(),vs.end(),comp);
    string ans="";
    for(int i=A.size()-1;i>-1;i--)
    {
        ans+=to_string(vs[i]);
    }
    if(ans.length()==0 || ans[0]=='0')
    {
        ans="0";
    }
    return ans;
}

