
public class Whip extends CondimetDecorator{
	Beverage beverage;
	
	public Whip(Beverage b){
		this.beverage = b;
	}

	@Override
	public String getDescription() {
		return beverage.getDescription() + ", whip";
	}

	@Override
	public double cost() {
		return .1+beverage.cost();
	}
	
}
