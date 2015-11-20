using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.Text;
using System.Text.RegularExpressions;

public class SumAndProductPuzzle
{
    public long getSum(int A, int B)
    {
        long cnt = 0;
        for (long i = A; i <= B; i++)
        {
        }
        return cnt;
    }

    long gcd(long m, long n)
    {
        if (m >= n)
        {
            if (n == 0)
                return m;
            else
                return gcd(n, m % n);
        } else
        {
            return gcd(n, m);
        }
    }
    // BEGIN KAWIGIEDIT TESTING
    // Generated by KawigiEdit 2.1.4 (beta) modified by pivanof

    #region Testing code generated by KawigiEdit

    [STAThread]
    private static Boolean KawigiEdit_RunTest(int testNum, int p0, int p1, Boolean hasAnswer, long p2)
    {
        Console.Write("Test " + testNum + ": [" + p0 + "," + p1);
        Console.WriteLine("]");
        SumAndProductPuzzle obj;
        long answer;
        obj = new SumAndProductPuzzle();
        DateTime startTime = DateTime.Now;
        answer = obj.getSum(p0, p1);
        DateTime endTime = DateTime.Now;
        Boolean res;
        res = true;
        Console.WriteLine("Time: " + (endTime - startTime).TotalSeconds + " seconds");
        if (hasAnswer)
        {
            Console.WriteLine("Desired answer:");
            Console.WriteLine("\t" + p2);
        }
        Console.WriteLine("Your answer:");
        Console.WriteLine("\t" + answer);
        if (hasAnswer)
        {
            res = answer == p2;
        }
        if (!res)
        {
            Console.WriteLine("DOESN'T MATCH!!!!");
        } else if ((endTime - startTime).TotalSeconds >= 2)
        {
            Console.WriteLine("FAIL the timeout");
            res = false;
        } else if (hasAnswer)
        {
            Console.WriteLine("Match :-)");
        } else
        {
            Console.WriteLine("OK, but is it right?");
        }
        Console.WriteLine("");
        return res;
    }

    public static void Main1(string[] args)
    {
        Boolean all_right;
        all_right = true;
		
        int p0;
        int p1;
        long p2;
		
        // ----- test 0 -----
        p0 = 30;
        p1 = 33;
        p2 = 33L;
        all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
        // ------------------
		
        // ----- test 1 -----
        p0 = 8;
        p1 = 11;
        p2 = 19L;
        all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
        // ------------------
		
        // ----- test 2 -----
        p0 = 40;
        p1 = 43;
        p2 = 0L;
        all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
        // ------------------
		
        // ----- test 3 -----
        p0 = 47;
        p1 = 74;
        p2 = 168L;
        all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
        // ------------------
		
        // ----- test 4 -----
        p0 = 1;
        p1 = 2;
        p2 = 0L;
        all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
        // ------------------
		
        if (all_right)
        {
            Console.WriteLine("You're a stud (at least on the example cases)!");
        } else
        {
            Console.WriteLine("Some of the test cases had errors.");
        }
    }

    #endregion

    // END KAWIGIEDIT TESTING
}
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!
