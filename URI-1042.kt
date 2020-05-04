import java.util.Scanner
fun main(args: Array<String>){
    val reader = Scanner(System.`in`)
    var n1:Int = reader.nextInt()
    var n2:Int = reader.nextInt()
    var n3:Int = reader.nextInt()
    var maior : Int = 0
    var menor :  Int = 0

    if(n1 > n2){
        if(n1 > n3){
            maior = n1
        }else{
            maior = n3
        }
    }

}