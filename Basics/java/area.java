import java.util.*;
class square
{
	private
	int a;
	float area;
	
	public square()
	{
	
		Scanner sc =new Scanner(System.in);
		
		System.out.println("\n Enter Side of square:-");
		this.a=sc.nextInt();
		System.out.println("\n Side of square:-"+a);
		//float area=sc.nextFloat();
		
	}
	
	void area()
	{
		//Scanner sc =new Scanner(System.in);
		//float area=sc.nextFloat();
		area= a*a ;
		System.out.println ("Area of the square is:-"+area);
		
	}
	
	
}

class Rectangle
{
	private
	int l,b;
	float area;
	
	public Rectangle()
	{
	
		Scanner sc =new Scanner(System.in);
		
		this.l = sc.nextInt();
		this.b= sc.nextInt();
		System.out.println("\n lenght of the rectangle is"+l);
		System.out.println("breadth of the rectangle is :-"+b);
		//float area=sc.nextFloat();
		
	}
		
	
	void area()
	{
		//Scanner sc =new Scanner(System.in);
		//float area=sc.nextFloat();
		area=l*b;
		System.out.println("Area of the rectangle is:-" +area);
		//float area=sc.nextFloat();
	
	}
	
}
public class area
{ 
	public static void main(String[] args)

	{

		square s = new square();
		s.area();
		Rectangle r=new Rectangle();
		r.area();
	}
}
