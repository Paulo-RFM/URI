import java.util.Scanner

fun main(args: Array<String>){
    val reader = Scanner(System.`in`)
    var n1: Double = reader.nextDouble()
    var n2: Double = reader.nextDouble()
    var n3: Double = reader.nextDouble()
    var n4: Double = reader.nextDouble()
    var media: Double = ((n1*2) + (n2*3) + (n3*4) + (n4*1))/10
    var exame : Double = 0.0

    println("Media: %.1f".format(media))

    if (media >= 7.0){
        println("Aluno aprovado.")
    }else if(media >= 5){
        println("Aluno em exame.")
        exame = reader.nextDouble()
        println("Nota do exame: %.1f".format(exame))

            if (media + exame/2.0 >= 5){
                println("Aluno aprovado.")
            }else{
                println("Aluno reprovado.")
            }
        println("Media final: %.1f".format((media + exame)/2))
    }
    else{
        println("Aluno reprovado.")
    }
}