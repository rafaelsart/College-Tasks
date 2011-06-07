import java.util.*;

class Empresa {

	public static void menuConsultaNome(Estoque estoque){
		Scanner teclado = new Scanner(System.in);
		String nomeProduto;
		int i;
		Produto xprod;

		System.out.print("Digite o nome do produto: ");
		nomeProduto = teclado.next();

		xprod = estoque.consultarProduto(nomeProduto);
		
		System.out.println(xprod.getNome());
		System.out.println(xprod.getCodigo());
		System.out.println(xprod.getQuantidade());
	}


	//pau viado
	public static void menuConsultaCodigo(Estoque estoque){
		Scanner teclado = new Scanner(System.in);
		int codigoProduto;
		Produto xprod;
		int i;

		System.out.print("Digite o codigo do produto: ");
		codigoProduto = teclado.nextInt();

		xprod = estoque.consultarProduto(codigoProduto);

		System.out.println(xprod.getNome());
		System.out.println(xprod.getCodigo());
		System.out.println(xprod.getQuantidade());
	}

	public static Produto menuInserirProduto() {
		Scanner teclado = new Scanner(System.in);
		String nome, pass;
		int codigo, quantidade;
		Produto produto;

		System.out.println("########### INSERIR PRODUTO ###########");
		System.out.println("");
		System.out.print("Nome: ");
		
		nome = teclado.next();

		System.out.print("Codigo: ");

		codigo = teclado.nextInt();

		System.out.print("Quantidade: ");

		quantidade = teclado.nextInt();

		produto = new Produto(nome, codigo, quantidade);

		return produto;
	}

	public static void menuConsultarProduto(Estoque estoque) {
		Scanner teclado = new Scanner(System.in);
		String nome;
		int codigo, opt=0;
		Produto produto;

		System.out.println("########### CONSULTAR PRODUTO ###########");
		System.out.println("");
		System.out.println("1- Consulta pelo nome");
		System.out.println("2- Consulta pelo codigo");

		
		System.out.println("");
		System.out.print("Digite a opcao desejada: ");
		
		opt = teclado.nextInt();		

		/* IMPLEMENTAR OS DOIS TIPOS DE CONSULTA DENTRO DO SWITCH */
		switch(opt) {
			case 1: menuConsultaNome(estoque); break;
			case 2: menuConsultaCodigo(estoque); break;
			default: break;
		}

	}
	
	public static void main (String args[]) {
		Estoque estoque = new Estoque();
		Scanner teclado = new Scanner(System.in);
		Produto prodx;
		String pass;
		
		int sair = 0;
		int opt = -1;
			
		/*Produto prod1 = new Produto("Abacaxi", 123, 10);

		estoque.getProdutos().add(prod1);*/

		while(sair != 1) {
			System.out.println("######## Escolha o usuario ########");
			System.out.println("");
			System.out.println("1- Administrador");
			System.out.println("2- Usuário Comum");

			opt = teclado.nextInt();

			switch(opt) {
				case 1:
					System.out.println("Digite sua senha: ");
					pass = teclado.next();
					sair = 1;
					//Usuario usuario = new Administrador();
					break;
				case 2:
					Usuario usuario = new Comum();

					sair = 1;
					break;
			}
		}		


		sair = 0;
		while(sair != 1) {

			System.out.println("########## MENU ##########");
			System.out.println("");
			System.out.println("1- Inserir produto");
			System.out.println("2- Consultar produto");
			System.out.println("3- Remover produto");
			System.out.println("4- Blaaah produto");
			System.out.println("5- Blaasj produto");
			System.out.println("6- Sair");
			
			opt = teclado.nextInt();

			switch(opt) {
				case 1: 
					prodx = menuInserirProduto();
					
					estoque.inserirProduto(prodx); break;
				case 2: menuConsultarProduto(estoque); break;
				case 3: break;
				case 4: break;
				case 5: break;
				case 6: sair = 1; break;
				default: break;
			}
		}
	}
}
