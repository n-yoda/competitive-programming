using System;
using System.Linq;

namespace Chess
{
    class MainClass
    {
        struct Point
        {
            public int x, y;
        }

        public static void Main(string[] args)
        {
            var nums = Console.ReadLine().Split(" \n".ToCharArray()).Select(x => int.Parse(x)).ToArray();
            Point from = new Point() { x = nums[0], y = nums[1] };
            Point to = new Point() { x = nums[2], y = nums[3] };
            Console.WriteLine("{0} {1} {2}", Rook(from, to), Bishop(from, to), King(from, to));
        }

        static int Rook(Point from, Point to)
        {
            var count = 0;
            if (from.x != to.x)
                count++;
            if (from.y != to.y)
                count ++;
            return count;
        }

        static int Bishop(Point from, Point to)
        {
            if ((from.x + from.y) % 2 != (to.x + to.y) % 2)
                return 0;
            if (Math.Abs(from.x - to.x) == Math.Abs(from.y - to.y))
                return 1;
            else
                return 2;
        }

        static int King(Point from, Point to)
        {
            return Math.Max(Math.Abs(to.x - from.x), Math.Abs(to.y - from.y));
        }
    }
}
