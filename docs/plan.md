# Building process

## Genesis

- [Genesis 1](https://www.biblegateway.com/passage/?search=Genesis%201&version=NIV) notes:
    1. Create the environment
    2. Make it cyclical
    3. "Separate clouds from river"
    4. Have ground as "evolution phase" + fitness goal
    5. Ground has fruits, seeds, animals, and elements
    6. Constant source of light
- The environment will need a constant source of energy to maintain non-equilibrium
- Evolution on the outer-loop, learning in the inner loop
  - Evolutionary Computation (EC) has a broad search space; Deep Learning (DL) offers robust specific learning.
- Genotype (Encoding) and Phenotype (Decoding)
  - Only achievable if neural genes are implemented
- In traditional neural net, any reasoning requires the same amount of computation = layer * tokens.
  - MoE and outer layer can define how big of reasoning to perform.
  - Abstract Representation Space may help to isolate which area of a neural net/part of an agent to use (more efficient)
- Fitness function will be multi-objective, but one of it will be: How much energy it dissipates.
- Bootstrap creativity. It’s almost like humanity prioritized creativity as a highly demanded feature. We should do the same.
- Must keep learning at inference time
- Solutions may require multiple steps
- Fast thinking: Algorithms | Slow thinking: Deep learning
  - How to absorb information from thinking to memory?

## Creativity

- Sleep:
  - Maintenance, 4 stages, 90 mins
  - Information alchemy
  - "Knowledge --(dream)---> Wisdom"
- Damage (free, non-specialized energy) should lead for a network to maintain itself.
  - Stability/Maintenance is as important as self-replication.  
- Brain on agents is good, but it must come from how the environment is set.
  - N-body simulations, three-body problem, conway's game of life, emerging complexity
  - Instead of making 'pixels as atoms', we must define an atom with specific properties, universe-like properties
- Hierarchical planning (more than 2-level planing: e.g. figure path -> move limbs)
- "Only use RL when planning doesn't yield predicted outcome" ([Yann Lecun](https://www.youtube.com/watch?v=5t1vTLU7s40))
  - If that happens: either the objective function does not reflect what one wants to optimize, or the world model is wrong
  - In either case, that's where RL works the best (curiosity)
  - Maybe not as good as EC
- The agent should learn mostly from observations. Maybe a little bit from interactions
- Novelty reward (Novelty creates a gradient of behavioral differences — maximizing is done without any intent of search termination or direction.) + Fitness reward
  - Novelty (exploration) -> Fitness (exploitation) ...
  - Reward novelty.. define novelty beforehand
- EC as the mind, DL as the body, energy as the soul
- Capacity of reasoning should not impact the genetic code that determines such capacity. The capacity of reasoning itself is subject to change.
  - An expensive reasoning to make the architecture itself
  - And a cheap reasoning to live and see its fitness
- Mindless intelligence. A purely numerical solution beat the best chess player at the time, that could tell you “the way he plays”.
- Optimize things that are non-differentiable and have a very long time horizon (meta learning, sparse exploration problems)
- The necessity for a broader theoretical understanding of learning in machines.

## Additional commentary

- For ARC
  - What information must we take from training?
  - Symmetric it seems, so rotation generates more training data
  - How to find symmetries inside image?
    - This must be instant – that means, without using deep learning, it really shouldn't be hard
