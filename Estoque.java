import java.util.*;

public class Estoque {
	private ArrayList<Produto> produtos; 	

	public Estoque() {
		this.produtos = new ArrayList<Produto>(); 				
	}

	public ArrayList<Produto> getProdutos(){
		return(this.produtos);
	}

	public void inserirProduto(String nome, int codigo, int quantidade){
		Produto x = new Produto(nome, codigo, quantidade);
		
		this.produtos.add(x);
	}

	public void inserirProduto(Produto produto){
		this.produtos.add(produto);
	}

	public Produto consultarProduto(String nome) {
		int i;

		for(i=0; i < this.produtos.size(); i++){
			if(nome.compareToIgnoreCase(this.produtos.get(i).getNome()) == 0)
				return this.produtos.get(i);
		}

		return null;
	}

	public Produto consultarProduto(int codigo) {
		int i;

		for(i=0; i < this.produtos.size(); i++){
			if(this.produtos.get(i).getCodigo() == codigo)
				return this.produtos.get(i);
		}

		return null;
	}

	public void removerProduto(String nome) {
		int i;

		for(i=0; i < this.produtos.size(); i++) {
			if(this.produtos.get(i).getNome() == nome)
				this.produtos.remove(i);
		}		
	}

	public void removerProduto(int codigo) {
		int i;

		for(i=0; i < this.produtos.size(); i++) {
			if(this.produtos.get(i).getCodigo() == codigo)
				this.produtos.remove(i);
		}	
	}

	/*public void add(Produto produto){
		this.produtos.add(produto);
	}

	public Produto get(int index){
		prodx = this.produtos.get(index);

		return prodx;
	}*/

}
