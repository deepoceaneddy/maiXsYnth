// Project maiX
// code based on Otem Rellik
// https://github.com/otem/RDEI/blob/master/Nimbus/Nimbus.ino

// TO-DO
//    - FX (delay) -> Update 01
//    - SD-Card / Sounds
//    - adjust volume in code
//    - LEDs
// test





#include <Arduino.h>
  
#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveform       voiceOneB;      //xy=435,674
AudioSynthWaveform       voiceTwoB;      //xy=435,708
AudioSynthWaveform       voiceTwoD;      //xy=437,1129
AudioSynthWaveform       voiceOneD;      //xy=438,1093
AudioSynthWaveform       voiceThreeB;    //xy=440,744
AudioSynthNoiseWhite     noiseVoiceB;    //xy=441,778
AudioSynthWaveform       voiceThreeD;    //xy=440,1164
AudioSynthNoiseWhite     noiseVoiceD;    //xy=440,1198
AudioSynthWaveform       voiceTwoC;      //xy=458,929
AudioSynthWaveform       voiceOneC;      //xy=459,894
AudioSynthNoiseWhite     noiseVoiceC;    //xy=459,1001
AudioSynthWaveform       voiceThreeC;    //xy=462,965
AudioSynthWaveform       voiceOneA;      //xy=502,384
AudioSynthWaveform       voiceTwoA;      //xy=502,420
AudioSynthNoiseWhite     noiseVoiceA;    //xy=503,495
AudioSynthWaveform       voiceThreeA;    //xy=506,457
AudioMixer4              voiceMixerB;    //xy=615,739
AudioSynthWaveformDc     envelopeB;      //xy=625,684
AudioSynthWaveformDc     envelopeC;      //xy=626,901
AudioMixer4              voiceMixerC;    //xy=626,961
AudioMixer4              voiceMixerD;    //xy=627,1154
AudioSynthWaveformDc     envelopeD;      //xy=636,1090
AudioMixer4              voiceMixerA;    //xy=683,448
AudioSynthWaveformDc     envelopeA;      //xy=687,390
AudioInputI2S            i2s2;           //xy=765,252
AudioEffectMultiply      multiplyB;      //xy=774,711
AudioEffectMultiply      multiplyC;      //xy=786,932
AudioEffectMultiply      multiplyD;      //xy=786,1119
AudioSynthWaveform       LFO1;           //xy=805,854
AudioEffectMultiply      multiplyA;      //xy=844,438
AudioSynthWaveformDc     filterEnvD;     //xy=867,1197
AudioSynthWaveformDc     filterEnvB;     //xy=897,759
AudioSynthWaveformDc     filterEnvA;     //xy=902,529
AudioSynthWaveformDc     filterEnvC;     //xy=908,976
AudioMixer4              filterModMixerD; //xy=1025,1260
AudioMixer4              InputMixer;     //xy=1039,455
AudioMixer4              filterModMixerB; //xy=1050,811
AudioMixer4              filterModMixerA; //xy=1055,559
AudioMixer4              filterModMixerC; //xy=1060,1034
AudioSynthWaveform       LFO2;           //xy=1084,371
AudioSynthWaveformDc     lfo2Amt;        //xy=1098,269
AudioFilterStateVariable filterA;        //xy=1220,518
AudioFilterStateVariable filterD;        //xy=1223,1181
AudioFilterStateVariable filterB;        //xy=1231,757
AudioAnalyzePeak         peakC;          //xy=1231,859
AudioFilterStateVariable filterC;        //xy=1231,949
AudioAnalyzePeak         peakD;          //xy=1231,1095
AudioAnalyzePeak         peakA;          //xy=1235,449
AudioAnalyzePeak         peakB;          //xy=1253,641
AudioMixer4              LfoMixer;       //xy=1255,319
AudioAnalyzePeak         lfoPeak;        //xy=1412,313
AudioMixer4              finalMixer;     //xy=1436,776
AudioAnalyzePeak         finalPeak;      //xy=1510,962
AudioEffectFreeverb      freeverb1;      //xy=2028,719
AudioMixer4              reverbMixer;    //xy=2174,780
AudioOutputI2S           i2s1;           //xy=2351.888931274414,767.8889217376709
AudioConnection          patchCord1(voiceOneB, 0, voiceMixerB, 0);
AudioConnection          patchCord2(voiceTwoB, 0, voiceMixerB, 1);
AudioConnection          patchCord3(voiceTwoD, 0, voiceMixerD, 1);
AudioConnection          patchCord4(voiceOneD, 0, voiceMixerD, 0);
AudioConnection          patchCord5(voiceThreeB, 0, voiceMixerB, 2);
AudioConnection          patchCord6(noiseVoiceB, 0, voiceMixerB, 3);
AudioConnection          patchCord7(voiceThreeD, 0, voiceMixerD, 2);
AudioConnection          patchCord8(noiseVoiceD, 0, voiceMixerD, 3);
AudioConnection          patchCord9(voiceTwoC, 0, voiceMixerC, 1);
AudioConnection          patchCord10(voiceOneC, 0, voiceMixerC, 0);
AudioConnection          patchCord11(noiseVoiceC, 0, voiceMixerC, 3);
AudioConnection          patchCord12(voiceThreeC, 0, voiceMixerC, 2);
AudioConnection          patchCord13(voiceOneA, 0, voiceMixerA, 0);
AudioConnection          patchCord14(voiceTwoA, 0, voiceMixerA, 1);
AudioConnection          patchCord15(noiseVoiceA, 0, voiceMixerA, 3);
AudioConnection          patchCord16(voiceThreeA, 0, voiceMixerA, 2);
AudioConnection          patchCord17(voiceMixerB, 0, multiplyB, 1);
AudioConnection          patchCord18(envelopeB, 0, multiplyB, 0);
AudioConnection          patchCord19(envelopeC, 0, multiplyC, 0);
AudioConnection          patchCord20(voiceMixerC, 0, multiplyC, 1);
AudioConnection          patchCord21(voiceMixerD, 0, multiplyD, 1);
AudioConnection          patchCord22(envelopeD, 0, multiplyD, 0);
AudioConnection          patchCord23(voiceMixerA, 0, multiplyA, 1);
AudioConnection          patchCord24(envelopeA, 0, multiplyA, 0);
AudioConnection          patchCord25(i2s2, 0, InputMixer, 0);
AudioConnection          patchCord26(i2s2, 1, InputMixer, 1);
AudioConnection          patchCord27(multiplyB, 0, filterB, 0);
AudioConnection          patchCord28(multiplyC, 0, filterC, 0);
AudioConnection          patchCord29(multiplyD, 0, filterD, 0);
AudioConnection          patchCord30(LFO1, 0, filterModMixerA, 1);
AudioConnection          patchCord31(LFO1, 0, filterModMixerB, 1);
AudioConnection          patchCord32(LFO1, 0, filterModMixerC, 1);
AudioConnection          patchCord33(LFO1, 0, filterModMixerD, 1);
AudioConnection          patchCord34(multiplyA, 0, InputMixer, 2);
AudioConnection          patchCord35(filterEnvD, 0, filterModMixerD, 0);
AudioConnection          patchCord36(filterEnvB, 0, filterModMixerB, 0);
AudioConnection          patchCord37(filterEnvA, 0, filterModMixerA, 0);
AudioConnection          patchCord38(filterEnvC, 0, filterModMixerC, 0);
AudioConnection          patchCord39(filterModMixerD, 0, filterD, 1);
AudioConnection          patchCord40(InputMixer, 0, filterA, 0);
AudioConnection          patchCord41(filterModMixerB, 0, filterB, 1);
AudioConnection          patchCord42(filterModMixerA, 0, filterA, 1);
AudioConnection          patchCord43(filterModMixerC, 0, filterC, 1);
AudioConnection          patchCord44(LFO2, 0, LfoMixer, 1);
AudioConnection          patchCord45(lfo2Amt, 0, LfoMixer, 0);
AudioConnection          patchCord46(filterA, 0, finalMixer, 0);
AudioConnection          patchCord47(filterA, 0, peakA, 0);
AudioConnection          patchCord48(filterD, 0, finalMixer, 3);
AudioConnection          patchCord49(filterD, 0, peakD, 0);
AudioConnection          patchCord50(filterB, 0, finalMixer, 1);
AudioConnection          patchCord51(filterB, 0, peakB, 0);
AudioConnection          patchCord52(filterC, 0, finalMixer, 2);
AudioConnection          patchCord53(filterC, 0, peakC, 0);
AudioConnection          patchCord54(LfoMixer, lfoPeak);
AudioConnection          patchCord55(finalMixer, finalPeak);
AudioConnection          patchCord56(finalMixer, freeverb1);
AudioConnection          patchCord57(finalMixer, 0, reverbMixer, 1);
AudioConnection          patchCord58(freeverb1, 0, reverbMixer, 0);
AudioConnection          patchCord59(reverbMixer, 0, i2s1, 0);
AudioConnection          patchCord60(reverbMixer, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=1419,357
// GUItool: end automatically generated code


















///////////////////////////////////////////////////////////////////////////////////////
//======================================PINS=========================================//

//======Teensy 

// 0  = MIDI - receive
// 1  = S0 - MUX
// 2  = S1 - MUX
// 3  = S2 - MUX
// 4  = OSC1_switch
// 5  = OSC2_switch
// 6  = AUDIO BOARD
// 7  = AUDIO BOARD
// 8  = AUDIO BOARD
// 9  = OSC3_switch
// 10 = AUDIO BOARD
// 11 = AUDIO BOARD
// 12 = AUDIO BOARD

// 13 = AUDIO BOARD
// 14 = SIG - MUX1
// 15 = VOLUME                    - linear
// 16 = SIG - MUX2
// 17 = LFO_pitch_switch
// 18 = AUDIO BOARD
// 19 = AUDIO BOARD
// 20 = AUDIO BOARD
// 21 = AUDIO BOARD
// 22 = LFO_filter_switch
// 23 = AUDIO BOARD

//====== Teensy back

// 24 = REVERB_roomsize   (16)    - linear
// 25 = DELAY_1           (17)    - linear
// 26 = DELAY_2           (18)    - linear
// 27 = DELAY_3           (19)    - linear
// 28 = LED or switch???
// 29 = LED ???
// 30 = LED ???
// 31 = LED ???
// 32 = LED ???
// 33 = LED ???

//======Mux1

// 0  = OSC1_gain         (0)    - linear
// 1  = OSC2_gain         (1)    - linear
// 2  = OSC3_gain         (2)    - linear
// 3  = OSC4_gain         (3)    - linear
// 4  = OSC_detune        (4)    - linear
// 5  = LFO_pitch_freq    (5)    - log
// 6  = LFO_pitch_amt     (6)    - linear
// 7  = LFO_filter_freq   (7)    - log

//======Mux2

// 0  = LFO_filter_amt    (8)    - linear
// 1  = ENV_amp_atk       (9)    - linear
// 2  = ENV_amp_rel       (10)   - linear
// 3  = ENV_filter_atk    (11)   - linear
// 4  = ENV_filter_rel    (12)   - linear
// 5  = FILTER_cutoff     (13)   - log
// 6  = FILTER_res        (14)   - linear
// 7  = REVERB_mix        (15)   - linear



///////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////

// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 

// 
// 
// 
// 
// 










#include <Bounce.h>
#include <Adafruit_NeoPixel.h>
#include <Metro.h>
#include <MIDI.h>
//MIDI_CREATE_DEFAULT_INSTANCE();
MIDI_CREATE_INSTANCE(HardwareSerial, Serial1, MIDI);

/*
//Pixels
#define PIXEL_PIN 2
#define NUMPIXELS 12
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIXEL_PIN, NEO_GRB + NEO_KHZ800);
*/

/*
//Encoder
int encoderPin1 = 21;
int encoderPin2 = 24;
volatile int lastEncoded = 0;
volatile long encoderValue = 0;
int scaledEncVal;
int prevScaledEncVal;
*/

/*
//Touch Pins
bool noteTouched[8];
int noteTouchPins[8] = {0,1,15,16,17,25,32,33};
float noteCurrent[8];
*/

//Switches/EncoderBtn
Bounce btnSwBouncers[5] = {
    Bounce(4,10),
    Bounce(5,10),
    Bounce(9,10),
    Bounce(17,10),
    Bounce(22,10),
};
int btnSwPins[5] = {4,5,9,17,22};
int NUMBEROFSWITCHES = 5;

//Mux control pins
int s0 = 1;
int s1 = 2;
int s2 = 3;
//Mux in "SIG" pin
int SIG1_pin = 14;
int SIG2_pin = 16;

//Knobs
float analogValues[20]; 

//FirstRunFlag
bool firstRun;

//memoryCard
const int chipSelect = 10;


//Synth Params

float rawVals[20];

float finalAmp;
float voiceAPeak;
float voiceBPeak;
float voiceCPeak;
float voiceDPeak;

int scale;

float frequency;

int attackTime = 10;
int releaseTime = 10;
float lfoAmt;
float lfoFreq;
int lfoTimeMathArray[5] = {250, 500, 1000, 2000, 4000};
int lfoIndex;
float seqInterval;
float lfoTwoAmt;
float lfoTwoFreq;
float lfoPitchMod;
float octave[4] = {.25,.5,1,2};
int midiOctave[4] = {-24, -12, 0, 12};
int octaveKey;
int filterFreq;
float filterRes;
float masterDetune;
float plusDetune;
float minusDetune;
unsigned long filterEnvAttack;
unsigned long filterEnvRelease;

float value_tmp;


float voices[4];
float VoiceFreq[4];
float VoiceVel[4];
float voiceMod;

float ampArray[4];
int voiceNum;
//float currentVel;


int indicatorIndex;



void endVoice(float frequency){
  for (int i = 0; i < 4; ++i){
    if(VoiceFreq[i] == frequency){
      voices[i] = 0;
    }
  }
}

int lowestAmp(){
  int index = 0;
  for (int i = 0; i < 4; i++){
    if (ampArray[i] < ampArray[index]) {
      index = i;
    }
  }
  return index;
}


void startVoice(float frequency, float velocity){
  // for (int i = 0; i < 4; ++i){
  //   if (!voices[i]){
  //     voices[i] = frequency;
  //     VoiceFreq[i] = frequency;
  //     VoiceVel[i] = velocity;
  //     if (voices[i]){
  //       return;
  //     }
  //   }
  // }

  voiceNum = lowestAmp();
  //if voice is already in use scan to next voice
  for (int i = 0; i < 4; ++i){
    if (voices[voiceNum]){
      voiceNum++;
      if (voiceNum > 3){
        voiceNum = 0;
      }
    }
  }
  //Assign (unused voice || lowest voice)
  voices[voiceNum] = frequency;
  VoiceFreq[voiceNum] = voices[voiceNum];
  VoiceVel[voiceNum] = velocity;

}



void setMuxPin(int channel){
  int controlPin[] = {s2, s1, s0};

  int muxChannel[8][3]={
    {0,0,0}, //channel 0
    {0,0,1}, //channel 1
    {0,1,0}, //channel 2
    {0,1,1}, //channel 3
    {1,0,0}, //channel 4
    {1,0,1}, //channel 5
    {1,1,0}, //channel 6
    {1,1,1}  //channel 7
  };

  //loop through the 4 sig
  for(int i = 0; i < 3; i ++){
    digitalWrite(controlPin[i], muxChannel[channel][i]);
  }
}

void setVoceOneShape (bool saw){
  if (saw){
    voiceOneA.begin(WAVEFORM_SAWTOOTH);
    voiceOneB.begin(WAVEFORM_SAWTOOTH);
    voiceOneC.begin(WAVEFORM_SAWTOOTH);
    voiceOneD.begin(WAVEFORM_SAWTOOTH);
  }else{
    voiceOneA.begin(WAVEFORM_SQUARE);
    voiceOneB.begin(WAVEFORM_SQUARE);
    voiceOneC.begin(WAVEFORM_SQUARE);
    voiceOneD.begin(WAVEFORM_SQUARE);
  }
}
void setVoceTwoShape (bool saw){
  if (saw){
    voiceTwoA.begin(WAVEFORM_SAWTOOTH);
    voiceTwoB.begin(WAVEFORM_SAWTOOTH);
    voiceTwoC.begin(WAVEFORM_SAWTOOTH);
    voiceTwoD.begin(WAVEFORM_SAWTOOTH);
  }else{
    voiceTwoA.begin(WAVEFORM_SQUARE);
    voiceTwoB.begin(WAVEFORM_SQUARE);
    voiceTwoC.begin(WAVEFORM_SQUARE);
    voiceTwoD.begin(WAVEFORM_SQUARE);
  }
}
void setVoceThreeShape (bool saw){
  if (saw){
    voiceThreeA.begin(WAVEFORM_TRIANGLE);
    voiceThreeB.begin(WAVEFORM_TRIANGLE);
    voiceThreeC.begin(WAVEFORM_TRIANGLE);
    voiceThreeD.begin(WAVEFORM_TRIANGLE);
  }else{
    voiceThreeA.begin(WAVEFORM_SQUARE);
    voiceThreeB.begin(WAVEFORM_SQUARE);
    voiceThreeC.begin(WAVEFORM_SQUARE);
    voiceThreeD.begin(WAVEFORM_SQUARE);
  }
}
void setLfoShape(bool sine){
  if (sine){
    LFO1.begin(WAVEFORM_SINE);
  }else{
    LFO1.begin(WAVEFORM_SAWTOOTH_REVERSE);
  }
}
void setLfo2Shape(bool sine){
  if (sine){
    LFO2.begin(WAVEFORM_SINE);
  }else{
    LFO2.begin(WAVEFORM_SAWTOOTH_REVERSE);
  }
}


void setSynthParams(int number, float value){
  
  if (number < 4){
    
    voiceMixerA.gain(number, value/2046);
    voiceMixerB.gain(number, value/2046);
    voiceMixerC.gain(number, value/2046);
    voiceMixerD.gain(number, value/2046);
   
   /*
    voiceMixerA.gain(number, 0.5);  // !!!!!!!!!!!!!!!!
    voiceMixerB.gain(number, 0.5);
    voiceMixerC.gain(number, 0.5);
    voiceMixerD.gain(number, 0.5);
    */
  }else if(number == 4){
    masterDetune = value;
    plusDetune = map(masterDetune, 0, 1023, 1, 1.5);
    minusDetune = map(masterDetune, 0, 1023, 1, .75);
  }else if(number == 5){
    LFO2.frequency(value/130);
  }else if(number == 6){
    LFO2.amplitude(value/32736);
  }else if(number == 7){
    lfoFreq = value/120;
  }else if(number == 8){
    lfoAmt = value/1023;
  }else if(number == 9){
    attackTime = value * 2;
  }else if(number == 10){
    releaseTime = value * 2;
  }else if(number == 11){
    filterEnvAttack = value * 2;
  }else if(number == 12){
    filterEnvRelease = value * 2;
  }else if(number == 13){
    filterFreq = (value * 10) + 100;
  }else if(number == 14){
    filterRes = (value / 255) + 1.10;
  }else if (number == 15){  // reverb Mix
    reverbMixer.gain(0, value/1023);
    reverbMixer.gain(1, 1 - value/1023);
  }else if (number == 16){  // reverb roomsize
    freeverb1.roomsize(value/1023);
  }else if (number == 17){ // Delay volume
  }
  else if (number == 18){ // Delay time
  }
  else if (number == 19){ // Delay feedback
  }

}


//START MIDI
/*
void OnControlChange(byte channel, byte control, byte value){
  setSynthParams(control-1, value * 8.055);
  rawVals[control-1] = value * 8.055;
  paramLocks[control-1] = true;
}
*/

void OnNoteOn(byte channel, byte note, byte velocity){
  float freq = 440.0 * powf(2.0, (float)(note - 69) * 0.08333333);
  float vel = (float)velocity/127;
  startVoice(freq, vel);

  Serial.println("notein");
  Serial.println(note);
  Serial.println(velocity);
}

void OnNoteOff(byte channel, byte note, byte velocity){
  float freq = 440.0 * powf(2.0, (float)(note - 69) * 0.08333333);
  endVoice(freq);
  Serial.println("noteoff");
}
//END MIDI



void setup() {

  

  AudioMemory(50);
  sgtl5000_1.enable();
  sgtl5000_1.inputSelect(AUDIO_INPUT_LINEIN);
  sgtl5000_1.volume(.9);

  Serial.begin(9600);
  Serial.println("test Startup print");

  //MIDI
  /*
  usbMIDI.setHandleNoteOff(OnNoteOff);
  usbMIDI.setHandleNoteOn(OnNoteOn);
  usbMIDI.setHandleControlChange(OnControlChange);
  */

  MIDI.setHandleNoteOff(OnNoteOff);
  MIDI.setHandleNoteOn(OnNoteOn);
  //MIDI.setHandleControlChange(OnControlChange);
  MIDI.begin(MIDI_CHANNEL_OMNI);

  usbMIDI.setHandleNoteOff(OnNoteOff);
  usbMIDI.setHandleNoteOn(OnNoteOn);


/*
  //SD
  SPI.setMOSI(7);  // Audio shield has MOSI on pin 7
  SPI.setSCK(14);  // Audio shield has SCK on pin 14
  Serial.print("Initializing SD card...");
  if (!SD.begin(chipSelect)) {
    Serial.println("initialization failed!");
    return;
  }
  Serial.println("initialization done."); 
*/


  //lfoMixer
  LfoMixer.gain(0,.5);
  LfoMixer.gain(1,.5);

  lfo2Amt.amplitude(1);
  //LFO2.amplitude(1);
  //LFO2.frequency(1);

  LFO2.begin(1,1,WAVEFORM_SINE);

  //finalMixer
  finalMixer.gain(0,.25);
  finalMixer.gain(1,.25);
  finalMixer.gain(2,.25);
  finalMixer.gain(3,.25);

  //InputMixer
  InputMixer.gain(0,1);
  InputMixer.gain(1,1);
  InputMixer.gain(2,1);
  InputMixer.gain(3,.0);

  //reverbMixer
  reverbMixer.gain(0,0);  // wet
  reverbMixer.gain(1,1);  // dry
  reverbMixer.gain(2,0);
  reverbMixer.gain(3,0);

  freeverb1.damping(0.5);
  
  /*
  //delayMixer
  delayMixer.gain(0,0);  // delay1
  delayMixer.gain(1,0);  // delay2
  delayMixer.gain(2,1);  // original
  delayMixer.gain(3,0);

  
  //delayMixer1 (help)
  delayMixer1.gain(0,1);  
  delayMixer1.gain(1,1); 
  delayMixer1.gain(2,1);
  delayMixer1.gain(3,1);

  //delayMixer2 (help)
  delayMixer2.gain(0,1);  
  delayMixer2.gain(1,1); 
  delayMixer2.gain(2,1);
  delayMixer2.gain(3,1);
  

  for (int i = 0; i < 8; i++){
    if (i<4)
      delayMixer1.gain(i, 1.0 - (i * 0.125));
    else
      delayMixer2.gain(i-4, 1.0 - (i * 0.125));
  }
  */

  float voiceVol = 0.4;

  //Voice 1
  voiceOneA.amplitude(voiceVol);
  voiceOneB.amplitude(voiceVol);
  voiceOneC.amplitude(voiceVol);
  voiceOneD.amplitude(voiceVol);
  //Voice 2
  voiceTwoA.amplitude(voiceVol);
  voiceTwoB.amplitude(voiceVol);
  voiceTwoC.amplitude(voiceVol);
  voiceTwoD.amplitude(voiceVol);
  //Voice 3
  voiceThreeA.amplitude(voiceVol);
  voiceThreeB.amplitude(voiceVol);
  voiceThreeC.amplitude(voiceVol);
  voiceThreeD.amplitude(voiceVol);
  //noise
  noiseVoiceA.amplitude(.75*voiceVol);
  noiseVoiceB.amplitude(.75*voiceVol);
  noiseVoiceC.amplitude(.75*voiceVol);
  noiseVoiceD.amplitude(.75*voiceVol);
  //LFO
  LFO1.begin(.7,.5,WAVEFORM_SAWTOOTH_REVERSE);


  //filter
  filterA.octaveControl(2.5);
  filterB.octaveControl(2.5);
  filterC.octaveControl(2.5);
  filterD.octaveControl(2.5);


  //Switches/EncoderBtn
  pinMode(btnSwPins[0], INPUT_PULLUP);
  pinMode(btnSwPins[1], INPUT_PULLUP);
  pinMode(btnSwPins[2], INPUT_PULLUP);
  pinMode(btnSwPins[3], INPUT_PULLUP);
  pinMode(btnSwPins[4], INPUT_PULLUP);

  //Mux
  pinMode(s0, OUTPUT); 
  pinMode(s1, OUTPUT); 
  pinMode(s2, OUTPUT); 
  pinMode(SIG1_pin, INPUT);
  pinMode(SIG2_pin, INPUT);
  digitalWrite(s0, LOW);
  digitalWrite(s1, LOW);
  digitalWrite(s2, LOW);

  firstRun = true;

}

void loop(){

  //Serial.println("test");
  MIDI.read();
  usbMIDI.read();

  //Knobs MUXs
  for (int i = 0; i < 8; ++i){
    setMuxPin(i);
    analogValues[i] = analogRead(SIG1_pin);
    analogValues[i+8] = analogRead(SIG2_pin);
    //rawVals[i] = analogValues[i];
  }

  // Knobs backside
  analogValues[16] = analogRead(24);
  analogValues[17] = analogRead(25);
  analogValues[18] = analogRead(26);
  analogValues[19] = analogRead(27);

  for (int i = 0; i < 20; ++i){
    setSynthParams(i, analogValues[i]);
  }

  

  //Testing 

  
  setSynthParams(5, 1023);
  setSynthParams(6, 32736);
  setSynthParams(13, 1023);
  setSynthParams(15, 0);
  setSynthParams(5, 0);
  setSynthParams(7, 0);
  //setSynthParams(10, 1000);
  /*
  //setMuxPin(4);  // fifth knob at the board 
  setSynthParams(13, 10000);
  // setMuxPin(0);  // first knob at the board 
  setSynthParams(20, 0);
  setMuxPin(0);  
  setSynthParams(20, analogRead(SIG1_pin));
  analogValues[0] = analogRead(SIG1_pin);  
  setMuxPin(1);  
  analogValues[1] = analogRead(SIG1_pin);  
  setSynthParams(21, analogRead(SIG1_pin));
  setMuxPin(2);
  analogValues[2] = analogRead(SIG1_pin);  
  setSynthParams(22, analogRead(SIG1_pin));
  setMuxPin(3);
  analogValues[3] = analogRead(SIG1_pin);  
  setSynthParams(13, analogRead(SIG1_pin));
  */

  //Switches/EncoderBtn
  for (int i = 0; i < NUMBEROFSWITCHES; ++i){
    if (btnSwBouncers[i].update() || firstRun){
      switch (i) {
        case 0:
          setVoceOneShape(digitalRead(btnSwPins[i]));
          Serial.print("testOSCshape");
          break;
        case 1:
          setVoceTwoShape(digitalRead(btnSwPins[i]));
          break;
        case 2:
          setVoceThreeShape(digitalRead(btnSwPins[i]));
            break;
        case 3:
          setLfo2Shape(digitalRead(btnSwPins[i]));
          Serial.print("test");
          break;
        case 4:
          setLfoShape(digitalRead(btnSwPins[i]));
          Serial.print("testCase4");
          break;
      }
    }
  }


  //Voice Stuff
  for (int i = 0; i < 4; ++i){

    if(i == 0){//VoiceA
      voiceOneA.frequency(VoiceFreq[i] * lfoPitchMod);
      voiceTwoA.frequency(VoiceFreq[i] * plusDetune * lfoPitchMod);
      voiceThreeA.frequency(VoiceFreq[i] * minusDetune * lfoPitchMod); 
      //Env
      if(voices[i]){
        envelopeA.amplitude(VoiceVel[i], attackTime);
        filterEnvA.amplitude(VoiceVel[i],filterEnvAttack);
      }else{
        envelopeA.amplitude(0, releaseTime);
        filterEnvA.amplitude(-1,filterEnvRelease);
      }
    }else if(i == 1){//VoiceB
      voiceOneB.frequency(VoiceFreq[i] * lfoPitchMod);
      voiceTwoB.frequency(VoiceFreq[i] * plusDetune * lfoPitchMod);
      voiceThreeB.frequency(VoiceFreq[i] * minusDetune * lfoPitchMod); 
      //Env
      if(voices[i]){
        envelopeB.amplitude(VoiceVel[i], attackTime);
        filterEnvB.amplitude(VoiceVel[i],filterEnvAttack);
      }else{
        envelopeB.amplitude(0, releaseTime);
        filterEnvB.amplitude(-1,filterEnvRelease);
      }      
    }else if(i == 2){//VoiceC
      voiceOneC.frequency(VoiceFreq[i] * lfoPitchMod);
      voiceTwoC.frequency(VoiceFreq[i] * plusDetune * lfoPitchMod);
      voiceThreeC.frequency(VoiceFreq[i] * minusDetune * lfoPitchMod); 
      //Env
      if(voices[i]){
        envelopeC.amplitude(VoiceVel[i], attackTime);
        filterEnvC.amplitude(VoiceVel[i],filterEnvAttack);
      }else{
        envelopeC.amplitude(0, releaseTime);
        filterEnvC.amplitude(-1,filterEnvRelease);
      }      
    }else if(i == 3){//VoiceD
      voiceOneD.frequency(VoiceFreq[i] * lfoPitchMod);
      voiceTwoD.frequency(VoiceFreq[i] * plusDetune * lfoPitchMod);
      voiceThreeD.frequency(VoiceFreq[i] * minusDetune * lfoPitchMod); 
      //Env
      if(voices[i]){
        envelopeD.amplitude(VoiceVel[i], attackTime);
        filterEnvD.amplitude(VoiceVel[i],filterEnvAttack);
      }else{
        envelopeD.amplitude(0, releaseTime);
        filterEnvD.amplitude(-1,filterEnvRelease);
      }      
    }
  } 

  //LFO
  LFO1.frequency(lfoFreq);
  LFO1.amplitude(lfoAmt);
  //Filter
  //filterFreq = 2000;
  filterRes = 2;  // !!!!!!!!!!!!!!!!!!!!!!
  filterA.frequency(filterFreq);
  filterA.resonance(filterRes);
  filterB.frequency(filterFreq);
  filterB.resonance(filterRes);  
  filterC.frequency(filterFreq);
  filterC.resonance(filterRes); 
  filterD.frequency(filterFreq);
  filterD.resonance(filterRes); 
  //LFO2
  if(lfoPeak.available()){
    lfoPitchMod = lfoPeak.read() + .5;
  } 
  //voiceA
  if (peakA.available()){
    voiceAPeak = peakA.read();
    ampArray[0] = voiceAPeak;
  }
  //voiceB
  if (peakB.available()){
    voiceBPeak = peakB.read();
     ampArray[1] = voiceBPeak;
  }
  //voiceC
  if (peakC.available()){
    voiceCPeak = peakC.read();
    ampArray[2] = voiceCPeak;
  }
  //voiceD
  if (peakD.available()){
    voiceDPeak = peakD.read();
    ampArray[3] = voiceDPeak;
  }
  //FinalPeak
  if (finalPeak.available()){
    finalAmp = finalPeak.read();
  }

  firstRun = false;

  // Test print
/*
  Serial.print(analogValues[0]);
  Serial.print("\t");
  Serial.print(analogValues[1]);
  Serial.print("\t");
  Serial.print(analogValues[2]);
  Serial.print("\t");
  Serial.print(analogValues[3]);
  Serial.print("\t");
  Serial.println(analogValues[4]);
*/



}


