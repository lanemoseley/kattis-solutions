import java.util.Comparator;
import java.util.Scanner;
import java.util.ArrayList;

public class platforme {
    static class Platform {
        private int y, x1, x2;

        public Platform( int Y, int X1, int X2 ) { y = Y; x1 = X1; x2 = X2; }
        public int getY( ) { return y; }
    }

    public static void main( String[] args ) {
        Scanner cin = new Scanner( System.in );

        int n = cin.nextInt( );
        ArrayList<Platform> platforms = new ArrayList<>( n );

        // get all platform dimensions // TODO: cin.next( ) - 1 changed the variable but not the results???
        do { platforms.add( new Platform( cin.nextInt( ), cin.nextInt( ), cin.nextInt( ) - 1) ); } while ( --n > 0 );

        // sort platforms by height in ascending order
        platforms.sort( Comparator.comparing( Platform::getY ) );

        // determine length of support material
        int sum = 0;
        for ( int i = 0; i < platforms.size( ); ++i ) {
            boolean foundX1Len = false;
            boolean foundX2Len = false;
            for ( int j = i - 1; j >= 0; --j ) {
                if ( !foundX1Len && platforms.get( i ).x1 > platforms.get( j ).x1 && platforms.get( i ).x1 < platforms.get( j ).x2 ) {
                    sum += platforms.get( i ).y - platforms.get( j ).y;
                    foundX1Len = true;
                }

                if ( !foundX2Len && platforms.get( i ).x2 < platforms.get( j ).x2 && platforms.get( i ).x2 > platforms.get( j ).x1 ) {
                    sum += platforms.get( i ).y - platforms.get( j ).y;
                    foundX2Len = true;
                }
            }

            if ( !foundX1Len ) { sum += platforms.get( i ).y; }
            if ( !foundX2Len ) { sum += platforms.get( i ).y; }
        }

        System.out.println( sum );
    }
}
