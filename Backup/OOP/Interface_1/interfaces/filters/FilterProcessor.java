package interfaces.filters;

import interfaces.classprocessor.Apply;
import interfaces.classprocessor.Processor;
//������
class FilterAdapter implements Processor  {
	Filter filter;//��������
	public FilterAdapter(Filter filter) {
		this.filter = filter;
	}

	@Override
	public String name() {
		// TODO Auto-generated method stub
		return filter.name();
	}
	@Override
	//Э�䷵������
	public Waveform process(Object input) {
		// TODO Auto-generated method stub
		return filter.process((Waveform)input);
	}
}
public class FilterProcessor {
	public static void main(String[] args) {
		Waveform w1=new Waveform();
		Waveform w2=new Waveform();
		Waveform w3=new Waveform();
		Apply.process(new FilterAdapter(new LowPass(1.0)), w1);
		Apply.process(new FilterAdapter(new LowPass(2.0)), w2);
		Apply.process(new FilterAdapter(new BandPass(3.0,4.0)), w3);
	}
}
