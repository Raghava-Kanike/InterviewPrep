package prep.sorting.String;

public class RotationString {
	public boolean isRotational(String s1, String s2) {
		// TODO Auto-generated method stub
		//return (s1.length()==s2.length() && (s1+s1).contains(s2));
		return (s1.length()==s2.length() && (s1+s1).indexOf(s2)!=-1);
	}
		//we can use both indexof and contains
	  // s1 and s2 lenght should be same and s1+s2 should be a substring
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		RotationString rs =new RotationString();
		String s1="ADBC";
		String s2="BCAA";
		System.out.println((rs.isRotational(s1,s2))?"s1 and s2 are rotational":"s1 and s2 are not rotational");
		

	}

	

}
