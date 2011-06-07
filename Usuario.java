public class Usuario {
	private String nome;
	private int id;
	private String senha;
	
	public String getNome(){
		return this.nome;
	}
	
	public int getId(){
		return this.id;
	}

	public String getSenha(){
		return this.senha;
	}

	public void setNome(String nome){
		this.nome = nome;
	}

	public void setId(int id){
		this.id = id;
	}

	public void setSenha(String senha){
		this.senha = senha;
	}
		
}
