# Notes

## Building process

- On dissipative energy:
  - The environment will need a constant source of energy to maintain non-equilibrium
  - Fitness will be accounted to those who dissipate the most energy in its lifetime. "Life as a dissipative structure" - Ilya Prigogine
  - Stability/Maintenance is as important as self-replication. Is this an emergent behavior or not?!
- [Genesis 1](https://www.biblegateway.com/passage/?search=Genesis%201&version=NIV) notes:
    1. Create the environment
    2. Make it cyclical
    3. "Separate clouds from river"
    4. Have ground as "evolution phase" + fitness goal
    5. Ground has fruits, seeds, animals, and elements
    6. Constant source of light
- How to train agents through observation? (senses)
- Agent needs periodic 'trials and tribulations.' What would the nature of these trials be? Creative? Cyclic? Monte-Carlo like (RL trials)?
- Brain on agents is good, but it must come from how the environment is set.
  - How to generate big bang sized complexity? Must try algorithms. Particle generator c++
  - N-body simulations, three-body problem, conway's game of life, emerging complexity
  - Instead of making 'pixels as atoms', we must define an atom with specific properties, universe-like properties
- Hierarchical planning (more than 2-level planing: e.g. figure path -> move limbs)
- "Only use RL when planning doesn't yield predicted outcome" ([Yann Lecun](https://www.youtube.com/watch?v=5t1vTLU7s40))
  - If that happens: either the objective function does not reflect what one wants to optimize, or the world model is wrong
  - In either case, that's where RL works the best (curiosity)
  - Maybe not as good as EC
- When will i be satisfied with the model as "base model"? what will the 'base model' be?
- In traditional neural net, any reasoning requires the same amount of computation = layer * tokens. MoE and outer layer will define how big of reasoning to perform.
  - A new neural net to tell whether it is a good answer or not... trained on what? Use 'abstract representation space'... plan the answer by optimization before turning into text
- The agent should learn mostly from observations. Maybe a little bit from interactions
- "Faith is the force of life"
- What separates system 1 and system 2 in humans? 'easy/hard tasks'
  - Moravec's paradox
- Even if I achieve consciousness, it is not quantum. Algorithm’s pseudo randomness (on EC) at best.
  - [Adding randomness into algorithms makes them better at solving nondeterministic problems.](https://www.livescience.com/physics-mathematics/mathematics/avi-wigderson-wins-dollar1-million-turing-award-for-using-randomness-to-change-computer-science)
- How entropy and information works on generative AI
- Novelty reward (Novelty creates a gradient of behavioral differences — maximizing is done without any intent of search termination or direction.) + Fitness reward
  - Novelty (exploration) -> Fitness (exploitation) ...
  - Reward novelty.. define novelty beforehand
- Bootstrap creativity. It’s almost like humanity prioritized creativity as a highly demanded feature. We should do the same.
- AI that asks the right questions
- Predict future then optimize
- EC as the mind, DL as the body, energy as the soul
- Capacity of reasoning should not impact the genetic code that determines such capacity. The capacity of reasoning itself is subject to change.
  - An expensive reasoning to make the architecture itself
  - And a cheap reasoning to live and see its fitness
- Mindless intelligence. A purely numerical solution beat the best chess player at the time, that could tell you “the way he plays”.
- "To find Nash equilibrium, have every player in a non-cooperative game reveal their strategies to one another. If no player changes their strategy after knowing all others' strategies, a Nash equilibrium exists.”
- Genotype (Encoding) and Phenotype (Decoding)
- Optimize things that are non-differentiable and have a very long time horizon (meta learning, sparse exploration problems)
- Competitive Coevolution = Adversarial Training | Cooperative Coevolution = ?
- EVOLUTION ON THE OUTER-LOOP, LEARNING IN THE INNER LOOP
- Set: Environment and Genetics (doesn’t have to be binary… btw. Why 4 GTCA?)
- Neuroevolution
  - Q* was indeed a leak
    - Recognition of the importance of not over-focusing on specific features at the expense of overall functionality
    - The prospect of developing an ever-complex system sustained only by energy input.
    - Similarities between “genotype (encoding) and phenotype (decoding)“ ?
    - Evolutionary Computation (EC) has a broad search space; Deep Learning (DL) offers robust specific learning.
- How did edward edberg get his opportunity to do research at the university of chicago?
- The prospect of developing an ever-complex system sustained only by energy input.
- Advocacy for the benefits of multimodal deep learning agents in understanding complex biological systems. (Ask ChatGPT is that similar to multi objective optimization?)
- Any benefit pairing it with Reinforcement Learning?
- The necessity for a broader theoretical understanding of learning in machines.
- moving beyond supervised learning. (Ask ChatGPT - Why? What can we learn with unsupervised learning that supervised doesnt offer?)
- Revisit Nash equilibrium? Achieve Open-ended evolution ? Never-ending algorithm? Exploration vs exploitation?
- Updating weights but also nodes gives us a new degree of freedom (node creation and destruction?)
- The opportunity that a machine in which creativity emerges can be ground-breaking.  

### Articles

1. [_Efficient Evolution of Neural Network Topologies_. By Kenneth O. Stanley and Risto Miikkulainen. 2001.](https://nn.cs.utexas.edu/downloads/papers/stanley.cec02.pdf)
2. [_Biological order, structureand instabilities. By I. Prigogine and G. Nicolis. 1971._](https://repositories.lib.utexas.edu/server/api/core/bitstreams/5e8c94d3-1ca5-4b35-a010-6cc6378fc825/content)
3. [_Novelty search and the problem with objectives._ By Joel Lehman and Kenneth O. Stanley.](https://www.cs.swarthmore.edu/~meeden/DevelopmentalRobotics/lehmanNoveltySearch11.pdf)
4. [_Say “Sul Sul!∗” to SimSim, A Sims-Inspired Platform for Sandbox Game AI_. By NYU students.](https://arxiv.org/pdf/2008.11258.pdf)

## Misc

- Amazing website: [evolution.ml](https://evolution.ml/)
- Motivation: [Flexible Muscle-Based Locomotion for Bipedal Creatures](https://www.youtube.com/watch?v=pgaEE27nsQw). Youtube. Nov 25, 2013.
- [Evolutionary computation course](https://github.com/lmarti/evolutionary-computation-course). By [@lmarti](https://github.com/lmarti)
- [How to Build a Conscious AI Agent](https://www.linkedin.com/pulse/how-build-conscious-ai-agent-babak-hodjat-3eotc/?trackingId=dTlgwrrjhu5MbD%2FBzGX7fg%3D%3D). By Babak Hodjat. March 3, 2024.
- [Is Learning in Games Good for the Learners?](https://proceedings.neurips.cc/paper_files/paper/2023/file/a9ea92ef18aae17627d133534209e640-Paper-Conference.pdf)
- Human-Competitive website (with GP videos) - [Link](https://www.human-competitive.org/)
- Abstract and Reasoning Corpus benchmark - [Link](https://github.com/fchollet/ARC)
- [GECCO 2024](https://gecco-2024.sigevo.org/HomePage)
  - [This is GECCO](https://www.youtube.com/watch?v=wtTpY9th8HY)
  - Other journals: NeurIPS, ACL
- [evotorch](https://github.com/nnaisense/evotorch): Advanced evolutionary computation library built directly on top of PyTorch, created at NNAISENSE.
- [DEAP](https://github.com/DEAP/deap): Distributed Evolutionary Algorithms in Python

## Old questions

1. - TWO APPROACHES: From environment simulations, or pre-built genetics. How to merge both?

_Answer:_ Both.
